#include "m2c.h"

M2C_UNK func_0201735c(M2C_UNK, s32);                /* extern */
s32 func_02011a94(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

s32 func_02017188(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, u16 arg4) {
    s32 temp_r0;

    temp_r0 = func_02011a94(arg0, 0, arg1, arg2, (s32) arg4, 1, 3);
    func_0201735c(0xF, temp_r0);
    return temp_r0;
}
