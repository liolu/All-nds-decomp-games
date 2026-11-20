#include "m2c.h"

s32 func_020cafe4(s32);                             /* extern */
M2C_UNK func_020cecf4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_020ced9c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void func_020cec64(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5, u16 arg6) {
    if (func_020cafe4(arg5) & 1) {
        func_020ced9c(arg0, arg1, arg2, arg3, arg4, arg5, (s32) arg6);
        return;
    }
    func_020cecf4(arg0, arg1, arg2, arg3, arg4, arg5, (s32) arg6);
}
