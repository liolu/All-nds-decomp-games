/* compiler: 1.2/sp2p3  */
/* func_0206bd08 from projets/madagascar/src/auto/func_0206bd08.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020515f0(M2C_UNK, M2C_UNK);
extern s32 func_02051720(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02051878(M2C_UNK, M2C_UNK);
s32 func_02052284(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_020515f0(1, 2);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02051878(8, arg0);
    var_r0 = func_02051720(8, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
