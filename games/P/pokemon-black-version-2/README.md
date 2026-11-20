# Pokemon B2 decompilation (O)

Nintendo DS, game code `IREO`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

```shell
python tools/configure.py o
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
