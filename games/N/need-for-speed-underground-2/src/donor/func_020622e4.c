/* compiler: 1.2/sp2p3  */
/* func_0206bb04 from projets/madagascar/src/auto/func_0206bb04.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205a6bc(s32, M2C_UNK);
extern M2C_UNK func_0205b91c(void *, M2C_UNK, M2C_UNK);
extern M2C_UNK func_0205b9b0(s32, void *, M2C_UNK);
extern s32 func_02061834(M2C_UNK, M2C_UNK);
extern void *func_02061954();
extern s32 func_02061964(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02061a80(M2C_UNK, M2C_UNK);
s32 func_020622e4(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r1;

    temp_r0 = func_02061834(1, 2);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg1 == 0) {
        return 6;
    }
    func_0205a6bc(arg1, 0xC0);
    func_02061a80(0xC, arg0);
    temp_r1                             = (*(void **) ((s8 *) (func_02061954()) + (0xC)));
    (*(s16 *) ((s8 *) (temp_r1) + (0))) = 0xC;
    (*(s32 *) ((s8 *) (temp_r1) + (4))) = arg1;
    if (arg2 != 0) {
        func_0205b9b0(arg2, temp_r1 + 8, 0x18);
    } else {
        func_0205b91c(temp_r1 + 8, 0, 0x18);
    }
    var_r0 = func_02061964(0xC, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
