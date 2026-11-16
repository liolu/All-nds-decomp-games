/* compiler: 2.0/sp1p5  */
/* NNS_G3dGlbGetInvV from projets/blue-dragon-awakened-shadow/src/auto/NNS_G3dGlbGetInvV.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0207f000(M2C_UNK *, M2C_UNK *);
extern M2C_UNK data_020db500;
extern M2C_UNK data_020db54c;
extern M2C_UNK data_020db600;
M2C_UNK *func_0208b028(void) {
    if (!((*(s32 *) ((s8 *) (&data_020db500) + (0xFC))) & 8)) {
        func_0207f000(&data_020db54c, &data_020db600);
        (*(s32 *) ((s8 *) (&data_020db500) + (0xFC))) = (s32) ((*(s32 *) ((s8 *) (&data_020db500) + (0xFC))) | 8);
    }
    return &data_020db600;
}
