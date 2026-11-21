#!/usr/bin/env python3
"""Starts a game that is not in All-nds-decomp-games yet, from your own ROM.

    python tools/new_game.py ROM.nds [--slug name] [--title "Game name"] [--no-commit]

Result: games/<LETTER>/<slug>/ with the dsd configuration of the ROM (symbols, delinks...), README.md, AGENTS.md,
game.toml, and one local commit of those text files. The ROM itself is copied to extract/ (ignored by git: never in
the repository). Then `python nds.py build <slug>`, and open a pull request.

The name, version and SHA-1 are checked against catalog/games.tsv (No-Intro set): a bad dump is refused, so every
contributor builds from the same bytes.
"""
import argparse
import csv
import hashlib
import os
import re
import shutil
import subprocess
import sys
import unicodedata
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent
TOOLS = REPO / "tools"
CATALOG = REPO / "catalog" / "games.tsv"
EXE = ".exe" if os.name == "nt" else ""
# 4th letter of the game code -> version folder (config/<version>/)
REGIONS = {"E": "usa", "P": "eu", "V": "eu", "X": "eu", "Y": "eu", "J": "jp", "K": "kor", "U": "aus", "D": "ger",
           "F": "fra", "I": "ita", "S": "spa", "C": "chn", "H": "hol", "O": "int", "T": "usa", "W": "eu", "Z": "eu"}


def letter(slug: str) -> str:
    c = slug[:1].upper()
    return c if "A" <= c <= "Z" else "0-9"


def slugify(title: str) -> str:
    """'Legend of Zelda, The - Phantom Hourglass (Europe) (En,Fr)' -> 'legend-of-zelda-the-phantom-hourglass'."""
    t = re.sub(r"\s*\([^)]*\)", "", title)
    t = unicodedata.normalize("NFKD", t).encode("ascii", "ignore").decode()
    return re.sub(r"[^a-zA-Z0-9]+", "-", t).strip("-").lower()[:40].strip("-") or "game"


def catalog() -> list[dict]:
    if not CATALOG.exists():
        return []
    with open(CATALOG, encoding="utf-8", newline="") as f:
        return list(csv.DictReader(f, delimiter="\t"))


def existing(slug: str) -> Path | None:
    for p in (REPO / "games").glob(f"*/{slug}"):
        return p
    tracked = subprocess.run(["git", "ls-tree", "-d", "--name-only", "HEAD", f"games/{letter(slug)}/{slug}"],
                             cwd=REPO, capture_output=True, text=True).stdout.strip()
    return REPO / tracked if tracked else None


def dsd_path(given: str | None) -> Path:
    """dsd: --dsd, else tools/dsd (downloaded once, the version configure.py builds with)."""
    if given:
        return Path(given).resolve()
    p = TOOLS / f"dsd{EXE}"
    if not p.exists():
        version = re.search(r"DSD_VERSION = '([^']+)'", (TOOLS / "configure.py").read_text(encoding="utf-8")).group(1)
        print(f"downloading dsd {version}...")
        subprocess.run([sys.executable, str(TOOLS / "download_tool.py"), "dsd", version, "--path", str(p)],
                       cwd=REPO, check=True)
    return p


def run(cmd, cwd) -> subprocess.CompletedProcess:
    return subprocess.run([str(c) for c in cmd], cwd=cwd, capture_output=True, text=True, errors="replace")


def error_line(out: str) -> str:
    lines = [ln for ln in out.splitlines() if ln.strip() and not re.match(r"\s*\d+: ", ln) and "[WARN" not in ln]
    return " | ".join([ln for ln in lines if ln.startswith("Error")] or lines[-3:])


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("rom")
    ap.add_argument("--slug", help="folder name (default: from the catalogue title)")
    ap.add_argument("--title", help="game name in the README (default: catalogue title)")
    ap.add_argument("--dsd", help="dsd executable to use (default: tools/dsd, downloaded)")
    ap.add_argument("--arm7-bios", help="ARM7 BIOS dump, for ROMs that need it (never committed)")
    ap.add_argument("--no-commit", action="store_true", help="leave the new files uncommitted")
    ap.add_argument("--keep", action="store_true", help="keep the folder when dsd fails (to read init.log)")
    ap.add_argument("--any-rom", action="store_true", help="accept a ROM that is not in the catalogue")
    a = ap.parse_args()

    rom = Path(a.rom).resolve()
    data = rom.read_bytes()
    head = data[:0x200]
    code = head[0x0C:0x10].decode("latin1")
    header_title = head[:12].split(b"\0")[0].decode("latin1").strip()
    sha1 = hashlib.sha1(data).hexdigest()
    entry = next((e for e in catalog() if e["sha1"] == sha1), None)
    if entry is None and not a.any_rom:
        same = [e for e in catalog() if e["game_code"] == code]
        hint = f" Known dumps of {code}: " + "; ".join(f"{e['title']} ({e['sha1'][:8]})" for e in same[:5]) if same else ""
        sys.exit(f"{rom.name}: SHA-1 {sha1} is not in catalog/games.tsv (bad or modified dump?).{hint} "
                 "--any-rom to go on anyway.")
    title = a.title or (re.sub(r"\s*\([^)]*\)", "", entry["title"]) if entry else header_title.title())
    ver = REGIONS.get(code[3:4], code[3:4].lower() or "rom")
    slug = a.slug or slugify(entry["title"] if entry else title)
    if existing(slug) and not a.slug:
        slug = f"{slug}-{ver}"  # another version of a game already here: heroes-of-mana -> heroes-of-mana-usa
    found = existing(slug)
    if found:
        sys.exit(f"{found.relative_to(REPO).as_posix()} already exists (python nds.py get {slug}), or choose --slug")
    dest = REPO / "games" / letter(slug) / slug
    game = slug.replace("-", "_")
    print(f"{slug}: {title} [{code}] -> games/{letter(slug)}/{slug}, version '{ver}'")

    dsd = dsd_path(a.dsd)
    for d in ("include", "src", "config", "extract"):
        (dest / d).mkdir(parents=True, exist_ok=True)

    def fail(msg):
        if not a.keep:
            shutil.rmtree(dest, ignore_errors=True)  # a half-made folder would block the next try
        sys.exit(msg)

    base = dest / "extract" / f"baserom_{game}_{ver}.nds"
    shutil.copy2(rom, base)
    bios = []
    if a.arm7_bios:
        shutil.copy2(a.arm7_bios, dest / "arm7_bios.bin")
        bios = ["--arm7-bios", "arm7_bios.bin"]
    r = run([dsd, "rom", "extract", "--rom", base.relative_to(dest), "--output-path", f"extract/{ver}"] + bios, dest)
    if r.returncode:
        fail("dsd rom extract failed: " + error_line(r.stdout + r.stderr))
    init = [dsd, "init", "--rom-config", f"extract/{ver}/config.yaml", "--output-path", f"config/{ver}",
            "--build-path", f"build/{ver}"]
    r = run(init, dest)
    if r.returncode and "leads to no function" in r.stdout + r.stderr:
        # a call dsd cannot make a function of (a routine that never returns, like a C++ throw): an
        # "unknown function" symbol there instead of giving up
        shutil.rmtree(dest / "config" / ver, ignore_errors=True)
        r = run(init + ["--allow-unknown-function-calls"], dest)
    (dest / "init.log").write_text(r.stdout + r.stderr, encoding="utf-8", newline="\n")
    if r.returncode:
        fail("dsd init failed: " + error_line(r.stdout + r.stderr))

    def write(rel, text):
        (dest / rel).write_text(text, encoding="utf-8", newline="\n")

    write(f"config/{ver}/compilers.txt", "# Source files built with another compiler than game.toml mwcc_version\n"
                                         "# <source path> <mwccarm version> [extra flags]\n")
    write("game.toml", "# Per-game build settings read by tools/configure.py (shared by every game). Delete a key to "
                       "get the default.\n"
                       f'game = "{game}"\n'
                       'mwcc_version = "2.0/sp1p5"   # default compiler; single files can differ in config/<version>/compilers.txt\n'
                       'opt = "-O4,p"\n'
                       'lang = "c"                   # "c++" for C++ games\n'
                       "extra_cc_flags = []\n")
    shutil.copy2(TOOLS / "templates" / "m2c.h", dest / "include" / "m2c.h")
    write("include/engine.h", "/* Hand-written types and prototypes of this game (used as m2c context). */\n")
    write("include/m2c_protos.h", "")
    write(f"{game}_{ver}.sha1", f"{sha1}  {game}_{ver}.nds\n")
    write("extract/README.md",
          "This repository does not include any of the game's assets. Put your decrypted base ROM here "
          f"(`python nds.py rom {slug} <your ROM>` checks it and copies it):\n\n"
          f"| Version | File name | SHA1 |\n|---|---|---|\n| {ver.upper()} | `{base.name}` | `{sha1}` |\n\n"
          f"Game code `{code}`, title `{header_title}`.\n")
    write("README.md",
          f"# {title} decompilation ({ver.upper()})\n\nNintendo DS, game code `{code}`. Matching decompilation with "
          "Metrowerks mwccarm (compiler version still to be identified: `python ../../../tools/probe_compiler.py`).\n\n"
          "No game assets in this repository: see `extract/README.md`.\n\n"
          "From the root of All-nds-decomp-games:\n\n```shell\n"
          f"python nds.py build {slug}\npython nds.py match {slug} status\n```\n\n"
          "See `CONTRIBUTING.md` at the root of the repository and `AGENTS.md` for the rules.\n")
    write("AGENTS.md",
          f"# Instructions for AI agents\n\nMatching decompilation of {title} ({ver.upper()}, `{code}`): C compiled with "
          "the original compiler must rebuild a byte-identical ROM.\n\n"
          "## Hard rules\n1. Only the build decides: a function is matched only at 100% (`python nds.py match "
          f"{slug} verify` prints `VERIFY PASSED`). Never commit otherwise.\n2. Clean room: only the game binary and "
          "public projects; never leaked sources or Nintendo SDK source.\n3. Natural C; `asm` only for instructions "
          "compilers never generate.\n4. ASCII only in `src/`, `include/`.\n5. Never commit the ROM, BIOS, `extract/` "
          "or `build/`.\n6. Only commit this game's files (`git add -- .` from its folder, never `git add -A` at the "
          "root): the repository holds every game.\n7. Do not contribute AI-generated code to projects that forbid "
          "it.\n\n## Workflow\n```shell\n"
          f"python nds.py build {slug}\npython nds.py match {slug} verify\n```\n\n"
          "## TODO for a new game\n- Identify the compiler (`tools/probe_compiler.py`) and set `mwcc_version`, `opt`, "
          "`lang` (C or C++) in `game.toml` (never edit the shared `tools/configure.py`).\n"
          "- Read `docs/compiler.md` and `docs/troubleshooting.md` at the root of the repository.\n")

    if not a.no_commit:
        rel = dest.relative_to(REPO).as_posix()
        subprocess.run(["git", "add", "--", rel], cwd=REPO, check=True)
        r = subprocess.run(["git", "commit", "-q", "-m",
                            f"{slug}: new game, {title} ({code} {ver})\n\ndsd configuration made by "
                            "tools/new_game.py from the No-Intro ROM " + (entry["number"] if entry else code) + ".",
                            "--", rel], cwd=REPO, capture_output=True, text=True)
        print("committed (local): push it or open a pull request" if r.returncode == 0
              else "commit failed: " + (r.stderr or r.stdout).strip()[-300:])
    r = run([sys.executable, TOOLS / "configure.py", ver], dest)
    if r.returncode:
        print("configure.py failed (run `python nds.py build " + slug + "`):\n" + (r.stdout + r.stderr)[-800:])
    n = len(re.findall(r"kind:function", (dest / "config" / ver / "arm9" / "symbols.txt").read_text(encoding="utf-8")))
    print(f"OK {slug}: {n} functions in config/{ver}. Next: python nds.py build {slug}")


if __name__ == "__main__":
    main()
