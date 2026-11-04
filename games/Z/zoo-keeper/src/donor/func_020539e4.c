/* compiler: 1.2/sp2p3  */
/* func_02016830 from projets/code-lyoko/src/auto/func_02016830.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02051698();
extern s32 func_02051720(M2C_UNK, M2C_UNK, s32);
extern M2C_UNK func_02051878(M2C_UNK, M2C_UNK);
s32 func_020539e4(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02051698();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if ((arg1 != 0) && (arg1 != 1)) {
        return 6;
    }
    func_02051878(0x19, arg0);
    var_r0 = func_02051720(0x19, 1, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
