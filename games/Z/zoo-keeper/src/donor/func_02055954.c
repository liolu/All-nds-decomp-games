/* compiler: 1.2/sp2p3  */
/* func_020186ec from projets/code-lyoko/src/auto/func_020186ec.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0204aa34(s32, M2C_UNK, s32);
extern M2C_UNK func_0204aac8(s32, s32, s32);
void func_02055954(void *arg0, u32 arg1, u32 arg2, s32 arg3) {
    u32 temp_ip;
    u32 temp_r1;
    u32 var_lr;
    u32 var_r2;

    var_r2  = arg2;
    var_lr  = arg1;
    temp_ip = (*(u32 *) ((s8 *) (arg0) + (0)));
    if (var_lr < 0x4000U) {
        var_lr = 0x4000;
    }
    if (var_r2 > 0x8000U) {
        var_r2 = 0x8000;
    }
    temp_r1 = temp_ip + (*(s32 *) ((s8 *) (arg0) + (0xC)));
    if (var_lr < temp_ip) {
        var_lr = temp_ip;
    }
    if (var_r2 > temp_r1) {
        var_r2 = temp_r1;
    }
    if (var_lr >= var_r2) {
        return;
    }
    if (arg3 != 0) {
        func_0204aa34((*(s32 *) ((s8 *) (arg0) + (8))) + var_lr, 0, var_r2 - var_lr);
        return;
    }
    func_0204aac8((*(s32 *) ((s8 *) (arg0) + (4))) + var_lr, (*(s32 *) ((s8 *) (arg0) + (8))) + var_lr, var_r2 - var_lr);
}
