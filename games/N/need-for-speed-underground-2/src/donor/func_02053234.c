/* compiler: 2.0/sp1p5  */
/* func_0204e908 from projets/dragon-ball-origins/src/auto/func_0204e908.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_02177554;
s32 func_02053234(s32 arg0) {
    if (*((M2C_UNK *) ((s8 *) &data_02177554 + (arg0 * 4))) != 0) {
        return 1;
    }
    return 0;
}
