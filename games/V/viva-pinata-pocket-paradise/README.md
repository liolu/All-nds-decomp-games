# Vivapinatads decompilation (USA)

Nintendo DS, game code `CP3E`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python ../../../tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`░░░░░░░░░░░░░░░░░░░░` **1.24%** of the code matched · data 6.48% · 162/6803 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 158 | 158/158 | 1.20% |
| Reused from other decompilations, not merged into files yet | 4 | 4/4 | 0.04% |
| Game code: `src/data/` | 410 | 0/0 | 0.00% |

*Updated 2026-11-28 by `python ../../../tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python ../../../tools/configure.py usa
ninja
python ../../../tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
