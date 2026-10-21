#include "m2c.h"

s32 func_02021e74(s32, u32);                        /* extern */

void *func_0207485c(u8 *arg0, void *arg1) {
    u32 var_r1;
    u8 temp_r4;

    temp_r4 = *arg0;
    var_r1  = (u32) (((s32) M2C_FIELD(arg1, s32 *, 0x40) >> 0x10) * temp_r4) >> 8;
    if (var_r1 == 0) {
        var_r1 = 1;
    }
    M2C_FIELD(arg1, s32 *, 0x3C) = func_02021e74(0x03938700, var_r1);
    M2C_FIELD(arg1, u8 *, 0x13)  = temp_r4;
    return arg0 + 1;
}
