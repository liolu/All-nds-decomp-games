/* compiler: 1.2/sp2p3  */
/* func_02061cb0 from projets/children-of-mana/src/auto/func_02061cb0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02061834(M2C_UNK, M2C_UNK);
extern s32 func_02061964(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02061a80(M2C_UNK, M2C_UNK);
s32 func_020628c4(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02061834(1, 1);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02061a80(5, arg0);
    var_r0 = func_02061964(5, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
