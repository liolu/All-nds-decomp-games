#!/usr/bin/env python3
"""All-nds-decomp-games helper: work on one game without downloading the others.

    python nds.py list [TEXT]              games of this repository (and the ones kept in their own repository)
    python nds.py search TEXT              the catalogue of every Nintendo DS game (No-Intro): code, SHA-1, status
    python nds.py get GAME [GAME...]       download a game into games/<LETTER>/<GAME>/ (git sparse checkout)
    python nds.py drop GAME                remove a game from your disk (it stays in the repository)
    python nds.py setup                    install the Python packages the tools need (+ the pre-commit hook)
    python nds.py rom GAME ROM.nds         check your ROM (SHA-1) and copy it where the build expects it
    python nds.py build GAME               configure + ninja (downloads dsd, objdiff, the compilers the first time)
    python nds.py match GAME ARGS...       tools/match.py for the game: status, worklist, check FUNC, verify, progress
    python nds.py new ROM.nds [...]        start a game that is not here yet (tools/new_game.py)
    python nds.py readme                   rewrite the table of games in README.md (from the games on your disk)

GAME is the folder name (heroes-of-mana) or a game code (AHEP).
"""
import csv
import hashlib
import os
import re
import shutil
import subprocess
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parent
TOOLS = REPO / "tools"
CATALOG = REPO / "catalog" / "games.tsv"
# Games with outside contributors keep their own repository
ELSEWHERE = {
    "lego-star-wars-ii-the-original-trilogy": ("LEGO Star Wars II: The Original Trilogy",
                                               "https://github.com/liolu/lego-star-wars-ii-the-original-trilogy-decomp"),
    "sims-2-the": ("The Sims 2", "https://github.com/liolu/sims-2-the-decomp"),
    "nintendogs": ("Nintendogs (every version)", "https://github.com/liolu/nintendogs"),
}


def git(*args, check=False) -> str:
    r = subprocess.run(["git", *args], cwd=REPO, capture_output=True, text=True, errors="replace")
    if check and r.returncode:
        sys.exit((r.stderr or r.stdout).strip())
    return r.stdout


def letter(slug: str) -> str:
    c = slug[:1].upper()
    return c if "A" <= c <= "Z" else "0-9"


def catalog() -> list[dict]:
    if not CATALOG.exists():
        return []
    with open(CATALOG, encoding="utf-8", newline="") as f:
        return list(csv.DictReader(f, delimiter="\t"))


def tracked_games() -> list[str]:
    """games/<L>/<game> of the repository, even the ones not on disk (trees only: cheap in a partial clone)."""
    letters = [ln for ln in git("ls-tree", "-d", "--name-only", "HEAD", "games/").splitlines() if ln]
    if not letters:
        return []
    return [ln for ln in git("ls-tree", "-d", "--name-only", "HEAD", *[f"{d}/" for d in letters]).splitlines() if ln]


def resolve(name: str) -> str:
    """games/<L>/<slug> of a folder name or a game code."""
    games = tracked_games()
    for g in games:
        if g.rsplit("/", 1)[1] == name:
            return g
    if re.fullmatch(r"[A-Z0-9]{4}", name):
        for e in catalog():
            if e["game_code"] == name and e.get("folder", "").startswith("games/"):
                return e["folder"]
    if name in ELSEWHERE:
        sys.exit(f"{name} has its own repository: git clone {ELSEWHERE[name][1]}")
    near = [g.rsplit("/", 1)[1] for g in games if name.lower() in g.lower()]
    sys.exit(f"no game called {name} here." + (f" Did you mean: {', '.join(near[:8])}?" if near else
                                                 f" `python nds.py search {name}` looks in the catalogue."))


def game_dir(name: str) -> Path:
    rel = resolve(name)
    d = REPO / rel
    if not (d / "config").exists():
        sys.exit(f"{rel} is not on your disk: python nds.py get {rel.rsplit('/', 1)[1]}")
    return d


def version(d: Path) -> str:
    found = sorted(p.name for p in (d / "config").iterdir() if (p / "arm9" / "symbols.txt").exists())
    if not found:
        sys.exit(f"{d.name}: no config/<version>/arm9/symbols.txt")
    return found[0]


def progress(readme: Path) -> str:
    try:
        text = readme.read_text(encoding="utf-8", errors="replace")
    except OSError:
        return ""
    m = re.search(r"\*\*([\d.]+)%\*\* of the code matched(?: · data ([\d.]+)%)?(?: · (\d+)/(\d+) functions)?", text)
    return f"{m.group(1)}% code" + (f", data {m.group(2)}%" if m.group(2) else "") if m else ""


def sparse() -> bool:
    return git("config", "--bool", "core.sparseCheckout").strip() == "true"


# ---------------------------------------------------------------- commands
def cmd_list(args):
    want = " ".join(args).lower()
    games = tracked_games()
    for g in games:
        slug = g.rsplit("/", 1)[1]
        if want and want not in slug:
            continue
        here = (REPO / g / "config").exists()
        print(f"{slug:48} {'on disk ' if here else '        '} {progress(REPO / g / 'README.md') if here else ''}")
    for slug, (title, url) in ELSEWHERE.items():
        if not want or want in slug:
            print(f"{slug:48} own repository: {url}")
    print(f"\n{len(games)} games here. `python nds.py get <game>` downloads one.")


def cmd_search(args):
    if not args:
        sys.exit("python nds.py search TEXT (part of the title, or a game code like AHEP)")
    want = " ".join(args).lower()
    hits = [e for e in catalog() if want in e["title"].lower() or want == e["game_code"].lower()]
    for e in hits[:60]:
        where = e.get("folder") or "not started (python nds.py new <your ROM>)"
        print(f"{e['number']:>5}  {e['game_code']}  {e['title'][:70]:70}  {where}")
    print(f"{len(hits)} match(es)" + (" (60 shown)" if len(hits) > 60 else ""))


def cmd_get(args):
    if not args:
        sys.exit("python nds.py get GAME [GAME...]")
    rels = [resolve(n) for n in args]
    if sparse():
        git("sparse-checkout", "add", *rels, check=True)
    for rel in rels:
        print(f"{rel}: {'ready' if (REPO / rel / 'config').exists() else 'missing?'}")
        rom = REPO / rel / "extract" / "README.md"
        if rom.exists():
            m = re.search(r"\| `([^`]+\.nds)` \| `([0-9a-f]{40})`", rom.read_text(encoding="utf-8"))
            if m:
                print(f"  next: python nds.py rom {rel.rsplit('/', 1)[1]} <your ROM>   (SHA-1 {m.group(2)})")


def cmd_drop(args):
    if not sparse():
        sys.exit("this clone is not sparse: every game is on disk (see CONTRIBUTING.md to clone only one)")
    rels = {resolve(n) for n in args}
    keep = [ln for ln in git("sparse-checkout", "list").splitlines() if ln and ln not in rels]
    git("sparse-checkout", "set", *keep, check=True)
    print("removed from your disk: " + ", ".join(sorted(rels)))


def cmd_setup(args):
    subprocess.run([sys.executable, "-m", "pip", "install", "-r", str(TOOLS / "requirements.txt")], check=True)
    subprocess.run([sys.executable, "-m", "pre_commit", "install"], cwd=REPO)


def cmd_rom(args):
    if len(args) != 2:
        sys.exit("python nds.py rom GAME ROM.nds")
    d = game_dir(args[0])
    m = re.search(r"\| `([^`]+\.nds)` \| `([0-9a-f]{40})`", (d / "extract" / "README.md").read_text(encoding="utf-8"))
    if not m:
        sys.exit(f"{d.name}: extract/README.md does not name the ROM")
    name, want = m.groups()
    src = Path(args[1])
    got = hashlib.sha1(src.read_bytes()).hexdigest()
    if got != want:
        sys.exit(f"{src.name}: SHA-1 {got}, this game needs {want} (decrypted No-Intro dump). Not copied.")
    shutil.copy2(src, d / "extract" / name)
    print(f"OK: extract/{name}. Next: python nds.py build {d.name}")


def cmd_build(args):
    if not args:
        sys.exit("python nds.py build GAME [ninja targets...]")
    d = game_dir(args[0])
    v = version(d)
    if not any((d / "extract").glob("baserom*.nds")):
        sys.exit(f"{d.name}: no ROM in extract/ yet: python nds.py rom {d.name} <your ROM>")
    subprocess.run([sys.executable, str(TOOLS / "configure.py"), v], cwd=d, check=True)
    ninja = shutil.which("ninja") or shutil.which("ninja", path=str(Path(sys.executable).parent / "Scripts"))
    if not ninja:
        sys.exit("ninja not found: python nds.py setup")
    sys.exit(subprocess.run([ninja, *args[1:]], cwd=d).returncode)


def cmd_match(args):
    if not args:
        sys.exit("python nds.py match GAME status|worklist|check FUNC|verify|progress")
    d = game_dir(args[0])
    sys.exit(subprocess.run([sys.executable, str(TOOLS / "match.py"), *args[1:]], cwd=d).returncode)


def cmd_new(args):
    sys.exit(subprocess.run([sys.executable, str(TOOLS / "new_game.py"), *args], cwd=REPO).returncode)


def cmd_readme(args):
    """The table between <!-- games:start --> and <!-- games:end --> in README.md."""
    rows = []
    names = {}  # folder -> catalogue title without the (Region) (Languages) parts
    for e in catalog():
        if e.get("folder", "").startswith("games/") and e["folder"] not in names:
            names[e["folder"]] = re.sub(r"\s*\((?:[^)]*,[^)]*|USA|Europe|Japan|Korea|France|Germany|Spain|Italy|"
                                        r"Australia|Netherlands|China|World|En|Ja|Fr|De|Es|It)\)", "", e["title"])
    for rel in tracked_games():
        d = REPO / rel
        readme = d / "README.md"
        text = readme.read_text(encoding="utf-8", errors="replace") if readme.exists() else ""
        title = names.get(rel) or (re.match(r"#\s*(.+?) decompilation", text) or [None, rel.rsplit("/", 1)[1]])[1]
        code = re.search(r"game code `(\w{4})`", text)
        m = re.search(r"\*\*([\d.]+)%\*\* of the code matched(?: · data ([\d.]+)%)?(?: · (\d+)/(\d+) functions)?", text)
        pct = float(m.group(1)) if m else 0.0
        rows.append((pct, title, code.group(1) if code else "", m, rel))
    rows.sort(key=lambda r: (-r[0], r[1].lower()))
    lines = ["| Game | Code | Code matched | Data | Functions |", "|---|---|---|---|---|"]
    for pct, title, code, m, rel in rows:
        data = f"{m.group(2)}%" if m and m.group(2) else ""
        fn = f"{m.group(3)}/{m.group(4)}" if m and m.group(3) else ""
        lines.append(f"| [{title}]({rel}) | {code} | {pct:.2f}% | {data} | {fn} |" if m else
                     f"| [{title}]({rel}) | {code} | set up | | |")
    for slug, (title, url) in ELSEWHERE.items():
        lines.append(f"| [{title}]({url}) (own repository) | | | | |")
    started = sum(1 for r in rows if r[3])
    head = f"{len(rows)} games in this repository ({started} with matched code), {len(ELSEWHERE)} in their own repository."
    block = "<!-- games:start -->\n" + head + "\n\n" + "\n".join(lines) + "\n<!-- games:end -->"
    p = REPO / "README.md"
    text = p.read_text(encoding="utf-8")
    text = re.sub(r"<!-- games:start -->.*?<!-- games:end -->", lambda _: block, text, flags=re.S)
    p.write_text(text, encoding="utf-8", newline="\n")
    print(head)


COMMANDS = {"list": cmd_list, "search": cmd_search, "get": cmd_get, "drop": cmd_drop, "setup": cmd_setup,
            "rom": cmd_rom, "build": cmd_build, "match": cmd_match, "new": cmd_new, "readme": cmd_readme}

if __name__ == "__main__":
    if len(sys.argv) < 2 or sys.argv[1] not in COMMANDS:
        print(__doc__)
        sys.exit(0 if len(sys.argv) < 2 else 1)
    COMMANDS[sys.argv[1]](sys.argv[2:])
