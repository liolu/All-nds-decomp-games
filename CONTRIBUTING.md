# Contributing

Thank you! One repository holds every game, but you only download the games you work on.

## 1. Get one game

You need git 2.27 or newer, Python 3.11 or newer, and nothing else to start: the build downloads its own programs
(dsd, objdiff, the mwccarm compilers, sjiswrap, and wibo on Linux/macOS, which runs the Windows compilers). Games whose
`game.toml` says `dsd = "dsi-enhanced"` get the dsd fork with DSi-enhanced (SDK 5) ROM support instead of the released
dsd ([liolu/ds-decomp](https://github.com/liolu/ds-decomp/releases), branch `dsi-enhanced`). DSi-enhanced ROMs rebuild
without a BIOS as long as their ARM9 matches; an `arm7_bios.bin` (your own ARM7 BIOS dump, in the game's folder) is
only needed to sign a changed ARM9 for a real DSi.

```shell
git clone --filter=blob:none --sparse https://github.com/liolu/All-nds-decomp-games
cd All-nds-decomp-games
python nds.py setup                  # pip install -r tools/requirements.txt + the pre-commit hook
python nds.py list                   # the games here, and the ones on your disk
python nds.py get heroes-of-mana     # git sparse-checkout add games/H/heroes-of-mana
```

`--filter=blob:none --sparse`: only the files at the top of the repository come with the clone; `get` downloads one
game's folder (and its history only when you look at it). `python nds.py drop <game>` takes it off your disk again.
A full `git clone` works too (every game, a few hundred MB).

Without nds.py: `git sparse-checkout add games/H/heroes-of-mana`.

## 2. Put your ROM

Each game's `extract/README.md` names the ROM (a decrypted No-Intro dump) and its SHA-1.

```shell
python nds.py rom heroes-of-mana "path/to/Heroes of Mana (Europe).nds"
```

It is copied to `games/H/heroes-of-mana/extract/` and ignored by git. Never commit a ROM, a BIOS, anything from
`extract/` or `build/`.

## 3. Build and match

```shell
python nds.py build heroes-of-mana                 # configure + ninja: rebuilds the ROM, checks its SHA-1
python nds.py match heroes-of-mana status          # progress
python nds.py match heroes-of-mana worklist -n 20  # functions left, smallest first
python nds.py match heroes-of-mana check FUNC      # rebuild, match % of one function
python nds.py match heroes-of-mana verify          # the gate: VERIFY PASSED or no commit
```

From the game's own folder the tools are one level up three times:
`python ../../../tools/configure.py eu`, `ninja`, `python ../../../tools/match.py verify`.

How to match: the assembly of every function is in `build/<version>/asm/` after `ninja dis`; put your C in `src/`
and check it with `match.py check`. Compiler settings of the game are in its `game.toml` (and per file in
`config/<version>/compilers.txt`); `docs/compiler.md` and `docs/troubleshooting.md` explain the usual traps.

## 4. Pull request

- One game per pull request, its name first in the title: `[heroes-of-mana] match 12 functions of ov004`.
- `python nds.py match <game> verify` must print `VERIFY PASSED` (ROM rebuilt byte for byte, files complete).
- Commit only the files of your game, from its folder: `git add -- src include config` then `git commit`.
  Never `git add -A` at the top of the repository.
- Sources are ASCII and formatted by clang-format (the pre-commit hook does it; the CI checks it on the files you
  changed).
- Clean room: from the game binary and public projects only. Never leaked source code.
- Follow the game's `AGENTS.md` if it has rules of its own.

## 5. Start a game that is not here

```shell
python nds.py search "phantom hourglass"   # is it in the catalogue? already started?
python nds.py new "path/to/your.nds"       # games/<LETTER>/<name>/: dsd configuration, README, one local commit
python nds.py build <name>
```

`new` checks the ROM against `catalog/games.tsv` (No-Intro SHA-1), names the folder after the catalogue title, adds
`-usa`, `-jp`... when another version of the game is already here, and commits only text files (the dsd
configuration). Then open a pull request with that commit: the first match can come later.

## Games in their own repository

LEGO Star Wars II, The Sims 2 and Nintendogs have outside contributors and stay in their own repositories (same
tools, same rules): see the table of the README.

## Native runtime (Nds Game Studio)

A game with a `native/` folder also has a native runtime for [Nds Game Studio](https://github.com/liolu/nds-game-studio).
It is checked by the CI on every change and published by a tag `<game>/runtime-v<n>` (`native/VERSION` must say `n`).
