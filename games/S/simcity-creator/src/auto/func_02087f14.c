#include "m2c.h"

M2C_UNK func_02070504(s32, M2C_UNK, M2C_UNK, s8 *); /* extern */

void func_02087f14(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s8 sp1;
    s8 sp0;
    s8 var_ip;
    s8 var_r0;

    if (arg3 == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    sp1 = var_r0;
    if (arg3 != 2) {
        var_ip = 1;
    } else {
        var_ip = 0;
    }
    sp0 = var_ip;
    func_02070504(arg0 + 0xA8, arg1, arg2, &sp0);
    func_02070504(arg0 + 0x8AC, arg1, arg2, &sp1);
}
