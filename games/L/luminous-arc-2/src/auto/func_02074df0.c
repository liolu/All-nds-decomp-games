#include "m2c.h"

void *func_02074df0(u8 *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 temp_r2;

    temp_r2                      = *arg0 << 0x10;
    M2C_FIELD(arg3, s32 *, 0x38) = temp_r2;
    M2C_FIELD(arg3, s32 *, 0x30) = temp_r2;
    M2C_FIELD(arg3, s16 *, 0x3C) = 0;
    M2C_FIELD(arg3, u16 *, 8)    = (u16) (M2C_FIELD(arg3, u16 *, 8) | 0x20);
    return arg0 + 1;
}
