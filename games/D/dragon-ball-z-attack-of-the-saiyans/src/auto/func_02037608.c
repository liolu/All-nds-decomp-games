#include "m2c.h"

M2C_UNK func_0200bb9c(s32, M2C_UNK);                /* extern */

void func_02037608(s32 arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s32 var_r1;

    var_r1 = arg1;
    if (arg3 == 0) {
        var_r1 += (arg0 - 1) * 0x19;
    }
    func_0200bb9c(var_r1, arg2);
}
