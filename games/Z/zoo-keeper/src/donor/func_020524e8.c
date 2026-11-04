/* compiler: 1.2/sp2p3  */
/* func_02061c00 from projets/children-of-mana/src/auto/func_02061c00.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02051710();
extern s32 func_02051720(M2C_UNK, M2C_UNK, s32, s32, s32);
extern M2C_UNK func_02051878(M2C_UNK, M2C_UNK);
extern s32 func_02051904(M2C_UNK, M2C_UNK);
s32 func_020524e8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r0_2;

    temp_r0 = func_02051904(arg0, arg2);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02051878(0, arg1);
    temp_r0_2 = func_02051710();
    var_r0    = func_02051720(0, 3, (*(s32 *) ((s8 *) (temp_r0_2) + (0))), (*(s32 *) ((s8 *) (temp_r0_2) + (4))),
                              (*(s32 *) ((s8 *) (temp_r0_2) + (0x10))));
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
