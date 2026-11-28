#include "m2c.h"

void func_020c8384(void *arg0, s32 arg1) {
    s32 temp_r2;

    M2C_FIELD((arg0 + (((u32) (M2C_FIELD(arg0, s32 *, 0x1C) * 0x10) >> 0x19) * 4)), s32 *, 0x31C) = arg1;
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x1C) =
        (s32) ((temp_r2 & ~0x0FE00000) | ((u32) ((((u32) (temp_r2 * 0x10) >> 0x19) + 1) << 0x19) >> 4));
}
