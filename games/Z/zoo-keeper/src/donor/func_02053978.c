/* compiler: 1.2/sp2p3  */
/* func_02062fc4 from projets/children-of-mana/src/auto/func_02062fc4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02051698();
extern s32 func_02051720(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32);
extern M2C_UNK func_02051878(M2C_UNK, M2C_UNK);
s32 func_02053978(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, u16 arg4) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02051698();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02051878(0x1D, arg0);
    var_r0 = func_02051720(0x1D, 4, arg1, arg2, arg3, (s32) arg4);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
