/* compiler: 2.0/sp1p5  */
/* NNSi_SndArcLoadSeqArc from projets/blue-dragon-awakened-shadow/src/auto/NNSi_SndArcLoadSeqArc.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0208c9f4(void);
extern M2C_UNK func_0208cd84(M2C_UNK);
extern M2C_UNK func_0208d598(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0208d260(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r0;

    temp_r0 = func_0208c9f4();
    if (temp_r0 == 0) {
        return 3;
    }
    temp_r0_2 = *(M2C_UNK *) temp_r0;
    if (arg1 & 8) {
        var_r0 = func_0208d598(temp_r0_2, arg2, arg3);
        if (var_r0 == 0) {
            return 7;
        }
        goto block_6;
    }
    var_r0 = func_0208cd84(temp_r0_2);
block_6:
    if (arg4 != ((void *) 0)) {
        *arg4 = var_r0;
    }
    return 0;
}
