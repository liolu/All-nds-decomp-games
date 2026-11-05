/* compiler: 1.2/sp2p3  */
/* func_02015650 from projets/code-lyoko/src/auto/func_02015650.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201d600(void *, M2C_UNK);
extern M2C_UNK func_0201d61c(s32, s32);
extern s32 func_020245c4(M2C_UNK, M2C_UNK, M2C_UNK);
extern void *func_02024688();
extern s32 func_02024698(M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32);
s32 func_020247c4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4, u16 arg5, u16 arg6) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r7;
    u16 temp_r6;
    u16 var_r5;
    void *temp_r4;

    var_r5  = 1;
    temp_r4 = (*(void **) ((s8 *) (func_02024688()) + (4)));
    temp_r0 = func_020245c4(2, 9, 0xA);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0201d600(temp_r4 + 0x3C, 2);
    temp_r6 = (*(u16 *) ((s8 *) (temp_r4) + (0x3C)));
    func_0201d600(temp_r4 + 0x188, 2);
    if ((*(u16 *) ((s8 *) (temp_r4) + (0x188))) == 0) {
        var_r7 = 1;
    } else {
        var_r7 = 0;
    }
    if (var_r7 == 1) {
        func_0201d600(temp_r4 + 0x182, 2);
        var_r5 = (*(u16 *) ((s8 *) (temp_r4) + (0x182)));
        func_0201d600(temp_r4 + 0x86, 2);
    }
    if (arg2 == 0) {
        return 6;
    }
    if (var_r5 == 0) {
        return 7;
    }
    func_0201d600(temp_r4 + 0x7C, 2);
    if (arg2 == (*(s32 *) ((s8 *) (temp_r4) + (0x7C)))) {
        return 6;
    }
    if (var_r7 != 0) {
        var_r0_2 = 4;
    } else {
        var_r0_2 = 2;
    }
    if ((s32) (arg3 + var_r0_2) > (s32) temp_r6) {
        return 6;
    }
    if (arg3 == 0) {
        return 6;
    }
    func_0201d61c(arg2, arg3);
    var_r0 = func_02024698(0xF, 7, arg2, arg3, (s32) arg4, (s32) arg5, (s32) arg6, arg0, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
