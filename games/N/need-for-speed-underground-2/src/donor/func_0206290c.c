/* compiler: 1.2/sp2p3  */
/* func_02061d40 from projets/children-of-mana/src/auto/func_02061d40.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02061834(M2C_UNK, M2C_UNK);
extern void *func_02061954();
extern s32 func_02061964(M2C_UNK, M2C_UNK, s32, s32, s32);
extern M2C_UNK func_02061a80(M2C_UNK, M2C_UNK);
s32 func_0206290c(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r0_2;

    temp_r0 = func_02061834(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02061a80(3, arg0);
    temp_r0_2 = func_02061954();
    var_r0    = func_02061964(3, 3, (*(s32 *) ((s8 *) (temp_r0_2) + (0))), (*(s32 *) ((s8 *) (temp_r0_2) + (4))),
                              (*(s32 *) ((s8 *) (temp_r0_2) + (0x10))));
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
