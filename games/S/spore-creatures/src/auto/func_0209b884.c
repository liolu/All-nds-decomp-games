#include "m2c.h"

void func_0209b884(void **arg0, s32 arg1) {
    void *temp_r2;

    temp_r2                         = *arg0;
    M2C_FIELD(temp_r2, s32 *, 0x2C) = (s32) ((M2C_FIELD(temp_r2, s32 *, 0x2C) & ~0xC00) | ((u32) (arg1 << 0x1E) >> 0x14));
}
