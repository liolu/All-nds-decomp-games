#include "m2c.h"

void *func_020496ec(M2C_UNK, M2C_UNK, M2C_UNK, u16); /* extern */

void func_020497a4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5, u16 arg6) {
    void *temp_r0;

    temp_r0                         = func_020496ec(arg0, arg1, arg2, arg6);
    M2C_FIELD(temp_r0, s32 *, 0x3C) = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x40) = arg4;
    M2C_FIELD(temp_r0, s32 *, 0x44) = arg5;
}
