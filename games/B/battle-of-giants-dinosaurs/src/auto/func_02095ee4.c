#include "m2c.h"

s32 func_020959a4(M2C_UNK);                         /* extern */
M2C_UNK func_02095f38(M2C_UNK, M2C_UNK, s32, s32);  /* extern */

void func_02095ee4(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, u32 arg3) {
    u32 var_r4;

    var_r4 = arg3;
    func_020959a4(arg1);
    if (var_r4 > (u32) (func_020959a4(arg1) - arg2)) {
        var_r4 = func_020959a4(arg1) - arg2;
    }
    func_02095f38(arg0, arg1, arg2, arg2 + var_r4);
}
