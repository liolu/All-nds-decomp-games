/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* setEffectTileOffset from https://github.com/ReGame-Labs/dwds_decomp src/battle/characters/chr_system.c (license: MIT),
 * reused by tools/donor_match.py */
typedef signed short s16;
extern void func_02047448(s16 x, s16 y);
extern s16 data_0224d6b0;
extern s16 data_0224d6cc;
void func_02047448(s16 x, s16 y) {
    data_0224d6cc = x;
    data_0224d6b0 = y;
}
