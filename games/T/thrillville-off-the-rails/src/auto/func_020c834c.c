#include "m2c.h"

void func_020c834c(void *arg0, s32 arg1) {
    s32 temp_r2;

    M2C_FIELD((arg0 + (((u32) (M2C_FIELD(arg0, s32 *, 0x1C) << 0x12) >> 0x19) * 4)), s32 *, 0x1DC) = arg1;
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x1C) =
        (s32) ((temp_r2 & ~0x3F80) | ((u32) ((((u32) (temp_r2 << 0x12) >> 0x19) + 1) << 0x19) >> 0x12));
}
