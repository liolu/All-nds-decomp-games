# Zootycoonds decompilation (EU)

Nintendo DS, game code `AZTP`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python ../../../tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`███░░░░░░░░░░░░░░░░░` **14.90%** of the code matched · data 1.66% · 773/1354 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 748 | 748/748 | 14.14% |
| Reused from other decompilations, not merged into files yet | 25 | 25/25 | 0.76% |
| Game code: `src/data/` | 1037 | 0/0 | 0.00% |

*Updated 2026-11-28 by `python ../../../tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python ../../../tools/configure.py eu
ninja
python ../../../tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
