# Db Kai Rpg decompilation (EU)

Nintendo DS, game code `BRPP`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python ../../../tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`████░░░░░░░░░░░░░░░░` **17.83%** of the code matched · data 95.73% · 1128/2129 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Reused from other decompilations, not merged into files yet | 448 | 448/448 | 9.69% |
| Auto-matched (raw m2c output, to clean up) | 678 | 678/678 | 8.13% |
| NitroSDK (Nintendo's system library) | 2 | 2/2 | 0.01% |
| Game code: `src/data/` | 996 | 0/0 | 0.00% |

*Updated 2026-11-28 by `python ../../../tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python ../../../tools/configure.py eu
ninja
python ../../../tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
