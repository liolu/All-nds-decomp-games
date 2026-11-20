/* compiler: 2.0/sp1p5  */
/* NNS_G3dGlbGetInvP from projets/blue-dragon-awakened-shadow/src/auto/NNS_G3dGlbGetInvP.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0208b06c(M2C_UNK *, M2C_UNK *);
extern M2C_UNK data_020db500;
extern M2C_UNK data_020db508;
extern M2C_UNK data_020db6c0;
M2C_UNK *func_0208b274(void) {
    if (!((*(s32 *) ((s8 *) (&data_020db500) + (0xFC))) & 0x10)) {
        func_0208b06c(&data_020db508, &data_020db6c0);
        (*(s32 *) ((s8 *) (&data_020db500) + (0xFC))) = (s32) ((*(s32 *) ((s8 *) (&data_020db500) + (0xFC))) | 0x10);
    }
    return &data_020db6c0;
}
