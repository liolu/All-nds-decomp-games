#include "m2c.h"

M2C_UNK func_0207c860(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */

void func_0207c75c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_ip;

    if (arg4 & 8) {
        var_ip = 1;
    } else if (arg4 & 4) {
        var_ip = 2;
    } else {
        var_ip = 0;
    }
    func_0207c860(0, arg0, arg1, arg2, arg3, arg4, arg5, var_ip, 1);
}
