#include "m2c.h"

void func_020949e8(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_r1;

    temp_r2                      = (M2C_FIELD(arg0, s32 *, 0x5C) & ~1) | (arg1 & 1);
    M2C_FIELD(arg0, s32 *, 0x5C) = temp_r2;
    if (((u32) (temp_r2 << 0x1F) >> 0x1F) != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x58), s32 *, 0x70) = var_r1;
}
