#include "m2c.h"

M2C_UNK func_0203400c(M2C_UNK, s32);                /* extern */

void func_02033fe4(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r1;

    var_r1 = 0;
    if (arg1 != 0) {
        var_r1 |= 2;
    }
    if (arg2 != 0) {
        var_r1 |= 0x10;
    }
    if (arg3 != 0) {
        var_r1 |= 0x20;
    }
    func_0203400c(arg0, var_r1);
}
