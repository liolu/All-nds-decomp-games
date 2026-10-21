#include "m2c.h"

void *func_02074f8c(u8 *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 temp_r1;
    u8 var_r1;

    var_r1 = *arg0;
    if ((s32) var_r1 > 0x7F) {
        var_r1 = 0x7F;
    }
    temp_r1                      = var_r1 << 0x10;
    M2C_FIELD(arg3, s32 *, 0x48) = temp_r1;
    M2C_FIELD(arg3, s32 *, 0x40) = temp_r1;
    M2C_FIELD(arg3, s16 *, 0x4C) = 0;
    M2C_FIELD(arg3, u16 *, 8)    = (u16) (M2C_FIELD(arg3, u16 *, 8) | 0x40);
    return arg0 + 1;
}
