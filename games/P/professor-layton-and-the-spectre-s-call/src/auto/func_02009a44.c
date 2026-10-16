#include "m2c.h"

s32 func_020097d8(M2C_UNK, M2C_UNK, M2C_UNK, s32 *, s32); /* extern */
M2C_UNK func_020098a8(M2C_UNK, M2C_UNK, s32, s32);  /* extern */

void func_02009a44(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    s32 sp4;

    if (func_020097d8(arg0, arg2, arg3, &sp4, 0) != 0) {
        return;
    }
    func_020098a8(arg0, arg1, sp4, arg4);
}
