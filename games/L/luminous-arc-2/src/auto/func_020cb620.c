#include "m2c.h"

s32 func_020cafe4(s32);                             /* extern */
M2C_UNK func_020cb6a0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020cb740(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */

void func_020cb620(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    if (func_020cafe4(arg4) & 1) {
        func_020cb740(arg0, arg1, arg2, arg3, arg4, arg5);
        return;
    }
    func_020cb6a0(arg0, arg1, arg2, arg3, arg4, arg5);
}
