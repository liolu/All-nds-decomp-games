# Spider-Man 2 decompilation (EU)

Nintendo DS, game code `AS2P`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python ../../../tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`░░░░░░░░░░░░░░░░░░░░` **0.56%** of the code matched · data 0.61% · 48/2847 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 48 | 48/48 | 0.56% |
| Game code: `src/data/` | 446 | 0/0 | 0.00% |

*Updated 2026-11-28 by `python ../../../tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python ../../../tools/configure.py eu
ninja
python ../../../tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
