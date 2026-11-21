# All NDS decomp games

Matching decompilations of Nintendo DS games, every game in one repository: C code that the original compiler
(Metrowerks mwccarm) turns into exactly the bytes of the original game, until the whole ROM rebuilds byte for byte.

**No game in this repository**: no ROM, no asset, nothing extracted from a game. You build from your own ROM.

## Work on one game without downloading the others

```shell
git clone --filter=blob:none --sparse https://github.com/liolu/All-nds-decomp-games
cd All-nds-decomp-games
python nds.py setup                         # Python packages of the tools (once)
python nds.py get heroes-of-mana            # downloads games/H/heroes-of-mana/ only
python nds.py rom heroes-of-mana my.nds     # checks your ROM (SHA-1) and puts it in place
python nds.py build heroes-of-mana          # downloads the compilers the first time, rebuilds the ROM
python nds.py match heroes-of-mana worklist # functions left, smallest first
```

Everything else (how to match a function, the rules of a pull request, how to start a new game) is in
[CONTRIBUTING.md](CONTRIBUTING.md).

## Layout

| Folder | What |
|---|---|
| `games/<LETTER>/<game>/` | one game: `config/` (dsd: symbols, delinks), `src/`, `include/`, `game.toml` (compiler settings), its README and AGENTS.md |
| `tools/` | the build tools, one copy for every game (`configure.py`, `match.py`, ROM rebuild, `new_game.py`) |
| `catalog/games.tsv` | every Nintendo DS game of the No-Intro set: game code, SHA-1, folder here if started |
| `docs/` | compiler notes, troubleshooting, automation |
| `nds.py` | the helper above |

## Games

Progress of each game (`python nds.py readme` rewrites this table). A game not in this list is not started yet:
`python nds.py search <title>` finds it in the catalogue and `python nds.py new <your ROM>` starts it.

<!-- games:start -->
106 games in this repository (34 with matched code), 3 in their own repository.

| Game | Code | Code matched | Data | Functions |
|---|---|---|---|---|
| [Tom and Jerry Tales](games/T/tom-and-jerry-tales) | AJTP | 97.47% | 100.00% | 1924/1932 |
| [Heroes of Mana](games/H/heroes-of-mana) | AHEP | 57.79% | 100.00% | 7868/9271 |
| [Rayman - Raving Rabbids](games/R/rayman-rr) |  | 53.01% | 100.00% | 2819/3608 |
| [Cooking Mama](games/C/cooking-mama) | ACCE | 33.15% | 0.00% | 1565/2553 |
| [Spider-Man 2](games/S/spider-man-2-usa) | AS2E | 32.97% | 99.85% | 1472/2837 |
| [Ultimate Spider-Man](games/U/ultimate-spider-man) | AUSF | 32.96% | 2.07% | 2537/4593 |
| [Pokemon Dash](games/P/pokemon-dash) | APDE | 31.27% | 97.22% | 2335/3280 |
| [Resident Evil - Deadly Silence](games/R/resident-evil-deadly-silence) | ABHE | 27.60% | 100.00% | 3655/5826 |
| [Farm Frenzy - Animal Country](games/F/farm-frenzy) | BFZE | 26.15% | 1.89% | 879/1210 |
| [Game de Demashita! Powerpuff Girls Z](games/P/powerpuff-girls-z) | YPPJ | 26.04% | 100.00% | 1492/2362 |
| [Blue Dragon - Awakened Shadow](games/B/blue-dragon-awakened-shadow) | YBUD | 24.08% | 7.55% | 5515/11801 |
| [Madagascar](games/M/madagascar) | AMGP | 22.01% | 0.00% | 1803/3445 |
| [Children of Mana](games/C/children-of-mana) | ASEE | 21.12% | 8.86% | 4607/9012 |
| [Dragon Ball - Origins](games/D/dragon-ball-origins) | CDZP | 21.07% | 99.86% | 3064/5120 |
| [Luminous Arc 2](games/L/luminous-arc-2) | YL2P | 18.71% | 0.00% | 2878/7439 |
| [Spyro - Shadow Legacy](games/S/spyro-shadow-legacy) | ASSE | 14.65% | 0.00% | 1796/3698 |
| [MySims](games/M/mysims) | AQIE | 12.03% | 0.00% | 2610/6822 |
| [Code Lyoko](games/C/code-lyoko) | AL5E | 11.09% | 0.00% | 2129/7475 |
| [Harvest Moon DS](games/H/harvest-moon-ds) | ABCE | 10.45% | 0.00% | 2736/5135 |
| [Spider-Man - Web of Shadows](games/S/spider-man-web-of-shadows) | CS5X | 9.67% | 0.00% | 2503/5848 |
| [Simpsons Game, The](games/S/simpsons-game) | YSZE | 9.31% | 100.00% | 2998/8971 |
| [Eyeshield 21 - Max Devil Power!](games/E/eyeshield-21) | AE4J | 6.99% | 5.36% | 3183/21941 |
| [Livly Garden](games/L/livly-garden) | BLIJ | 5.76% | 0.00% | 1285/9015 |
| [Pokemon Ranger](games/P/pokemon-ranger) | ARGE | 4.21% | 0.00% | 1084/7305 |
| [Crafting Mama](games/C/crafting-mama) | BQ8E | 3.67% | 0.00% | 1272/6424 |
| [TV Anime Fairy Tail - Gekitou! Madoushi Kessen](games/F/fairy-tail-madoushi) | BH6J | 2.55% | 100.00% | 1361/11097 |
| [Blue Dragon Plus](games/B/blue-dragon-plus) | YYBP | 2.11% | 0.00% | 630/16139 |
| [Original Story from Fairy Tail - Gekitotsu! Kardia Daiseidou](games/F/fairy-tail-kardia) | TFTJ | 2.06% | 100.00% | 1473/12900 |
| [Star Wars - The Clone Wars - Republic Heroes](games/S/star-wars-the-clone-wars-republic-heroes) | BW9E | 0.66% | 0.00% | 86/6665 |
| [Viva Pinata - Pocket Paradise](games/V/viva-pinata-pocket-paradise) | CP3E | 0.40% | 0.00% | 77/6803 |
| [Advance Wars - Dual Strike](games/A/advance-wars-dual-strike) | AWRP | set up | | |
| [Age of Empires - Mythologies](games/A/age-of-empires-mythologies) | CEPP | set up | | |
| [Battle of Giants - Dinosaurs](games/B/battle-of-giants-dinosaurs) | CD5E | set up | | |
| [Castlevania - Dawn of Sorrow](games/C/castlevania-dawn-of-sorrow) | ACVE | set up | | |
| [Castlevania - Order of Ecclesia](games/C/castlevania-order-of-ecclesia) | YR9E | set up | | |
| [Castlevania - Portrait of Ruin](games/C/castlevania-portrait-of-ruin) | ACBE | set up | | |
| [Clubhouse Games](games/C/club-house-games) | ATDE | set up | | |
| [Dawn of Heroes](games/D/dawn-of-heroes) | CIEE | set up | | |
| [Devil Survivor 2](games/D/devil-survivor-2) | TDVJ | set up | | |
| [Disgaea DS](games/D/disgaea-ds) | CDGE | set up | | |
| [Dr Kawashima's Brain Training - How Old Is Your Brain](games/D/dr-kawashima-s-brain-training-how-old-is) | ANDP | set up | | |
| [Dragon Ball Z - Attack of the Saiyans](games/D/dragon-ball-z-attack-of-the-saiyans) | BRPP | set up | | |
| [Dragon Ball Z - Supersonic Warriors 2](games/D/dragon-ball-z-supersonic-warriors-2) | A2SE | set up | | |
| [Gakuen Alice - Waku Waku Happy Friends](games/G/gakuen-alice-waku-waku-happy-friends) | YALJ | set up | | |
| [GoldenEye - Au Service du Mal](games/G/goldeneye-au-service-du-mal) | AGEF | set up | | |
| [GoldenEye - Rogue Agent](games/G/goldeneye-rogue-agent) | AGEE | set up | | |
| [Harry Potter and the Deathly Hallows - Part 1](games/H/harry-potter-and-the-deathly-hallows-par) | B7HE | set up | | |
| [Harry Potter and the Goblet of Fire](games/H/harry-potter-and-the-goblet-of-fire) | AHPP | set up | | |
| [Heroes of Mana](games/H/heroes-of-mana-usa) | AHEE | set up | | |
| [Higurashi no Naku Koro ni Kizuna III - Daisankan - Rasen [b]](games/H/higurashi-no-naku-koro-ni-kizuna-iii-dai) | CHIJ | set up | | |
| [How to Train Your Dragon](games/H/how-to-train-your-dragon) | BHDP | set up | | |
| [Iron Man 2](games/I/iron-man-2) | B2IE | set up | | |
| [Legend of Zelda, The - Phantom Hourglass](games/L/legend-of-zelda-the-phantom-hourglass) | AZEP | set up | | |
| [LEGO Star Wars II - The Original Trilogy](games/L/lego-star-wars-ii-the-original-trilo-eu) | AL7P | set up | | |
| [LEGO Star Wars II - The Original Trilogy](games/L/lego-star-wars-ii-the-original-trilo-jp) | AL7J | set up | | |
| [Mario & Luigi - Partners in Time](games/M/mario-luigi-partners-in-time) | ARMP | set up | | |
| [Mario Party DS](games/M/mario-party-ds) | A8TP | set up | | |
| [Myst (Rev 1)](games/M/myst) | YMYE | set up | | |
| [Need for Speed - Underground 2](games/N/need-for-speed-underground-2) | AUGE | set up | | |
| [Penguins of Madagascar, The (NDSi Enhanced)](games/P/penguins-of-madagascar-the) | VPEV | 0.00% | 0.00% | 5/8880 |
| [Plants vs. Zombies](games/P/plants-vs-zombies) | BWBE | set up | | |
| [Plants vs. Zombies (MSL)](games/P/plants-vs-zombies-eu) | BWBY | set up | | |
| [Plants vs. Zombies (Rondomedia)](games/P/plants-vs-zombies-eu-2) | BWBX | set up | | |
| [Pokemon - Version Platine [b]](games/P/pokemon-version-platine) | CPUF | set up | | |
| [Pokemon B2](games/P/pokemon-black-version-2) | IREO | set up | | |
| [Pokemon Card Game - Asobikata DS](games/Z/z085-pokemon-card-game-asobikata-ds) | TBWJ | set up | | |
| [Pokemon Dash](games/P/pokemon-dash-eu) | APDP | set up | | |
| [Pokemon Dash](games/P/pokemon-dash-jp) | APDJ | set up | | |
| [Pokemon Dash](games/P/pokemon-dash-kor) | APDK | set up | | |
| [Pokemon Mystery Dungeon - Blue Rescue Team](games/P/pokemon-mystery-dungeon-blue-rescue-team) | APHP | set up | | |
| [Pokemon Mystery Dungeon - Explorers of Time](games/P/pokemon-mystery-dungeon-explorers-of-tim) | YFTP | set up | | |
| [Pokemon Plus - Nobunaga no Yabou (NDSi Enhanced) [b]](games/P/pokemon-plus-nobunaga-no-yabou) | VPYJ | set up | | |
| [Pokemon Ss](games/P/pokemon-version-argent-soulsilver) | IPGF | set up | | |
| [Professor Layton and the Spectre's Call](games/P/professor-layton-and-the-spectre-s-call) | BLFP | set up | | |
| [Rayman - Raving Rabbids 2](games/R/rayman-raving-rabbids-2) | YRRE | set up | | |
| [Rayman DS](games/R/rayman-ds) | ARYP | set up | | |
| [SaGa 3 - Jikuu no Hasha - Shadow or Light](games/S/saga-3-jikuu-no-hasha-shadow-or-light) | BZ3J | set up | | |
| [Sakura Note - Ima ni Tsunagaru Mirai [b]](games/S/sakura-note-ima-ni-tsunagaru-mirai) | BSAJ | set up | | |
| [Seiken Densetsu - Heroes of Mana](games/S/seiken-densetsu-heroes-of-mana) | AHEJ | set up | | |
| [Settlers, The](games/T/the-settlers) | AUZE | set up | | |
| [Shrek - Forever After (NDSi Enhanced)](games/S/shrek-forever-after) | VSKV | set up | | |
| [Simanimals](games/S/simanimals) | CM3P | set up | | |
| [SimCity - Creator [b]](games/S/simcity-creator) | YC2P | set up | | |
| [Sims 2, The](games/S/sims-2-the-usa) | ASJE | set up | | |
| [Sims 2, The - Castaway](games/S/sims-2-the-castaway) | YS2E | set up | | |
| [Sims 2, The - Pets](games/S/sims-2-the-pets) | A4OP | set up | | |
| [Spider-Man - Shattered Dimensions](games/S/spider-man-shattered-dimensions) | B3PP | set up | | |
| [Spider-Man 2](games/S/spider-man-2-eu) | AS2P | 0.00% | 0.00% | 0/2847 |
| [Spore Creatures](games/S/spore-creatures) | YSPE | set up | | |
| [Star Wars - Episode III - Revenge of the Sith](games/S/star-wars-episode-iii-revenge-of-the-sit) | ASTP | set up | | |
| [Star Wars - Lethal Alliance](games/S/star-wars-lethal-alliance) | AWUP | set up | | |
| [Sudokumaniacs](games/S/sudokumaniacs) | AQMP | set up | | |
| [Super Mario 64 DS](games/S/super-mario-64-ds) | ASMP | set up | | |
| [Super Princess Peach](games/S/super-princess-peach) | ASPJ | set up | | |
| [Tales of Innocence](games/T/tales-of-innocence) | AYTJ | set up | | |
| [Thrillville - Off the Rails](games/T/thrillville-off-the-rails) | YTVE | set up | | |
| [Toiinnocence](games/T/tales-of-innocence-jp) | AYTJ | set up | | |
| [Toy Shop Tycoon](games/T/toy-shop-tycoon) | YYTP | set up | | |
| [Toy Story 3 (NDSi Enhanced)](games/T/toy-story-3-eu) | VT3V | 0.00% | 0.00% | 0/5746 |
| [Urbz, The - Sims in the City](games/U/urbz-the-sims-in-the-city) | ASIE | set up | | |
| [Valkyrie Profile - Toga o Seou Mono](games/V/valkyrie-profile-toga-o-seou-mono) | YVPJ | set up | | |
| [WarioWare - Touched!](games/W/warioware-touched) | AZWP | set up | | |
| [Wheel of Fortune [b]](games/W/wheel-of-fortune) | BW7E | 0.00% | 0.00% | 0/7390 |
| [Zelda no Densetsu - Mugen no Sunadokei](games/Z/zelda-no-densetsu-mugen-no-sunadokei) | AZEJ | set up | | |
| [Zoo Keeper](games/Z/zoo-keeper) | AZKP | set up | | |
| [Zoo Tycoon DS](games/Z/zoo-tycoon-ds) | AZTP | set up | | |
| [LEGO Star Wars II: The Original Trilogy](https://github.com/liolu/lego-star-wars-ii-the-original-trilogy-decomp) (own repository) | | | | |
| [The Sims 2](https://github.com/liolu/sims-2-the-decomp) (own repository) | | | | |
| [Nintendogs (every version)](https://github.com/liolu/nintendogs) (own repository) | | | | |
<!-- games:end -->

## Thanks

[dsd](https://github.com/AetiasHax/ds-decomp) (delinking and ROM rebuild), [objdiff](https://github.com/encounter/objdiff),
[m2c](https://github.com/matt-kempster/m2c), [ByteMatch](https://bytematch.dev) (progress pages).
Games are made with [DS Decomp Studio](https://github.com/liolu/ds-decomp-studio).

License: CC0 1.0 (the code of this repository; the games belong to their owners).
