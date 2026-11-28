#include "m2c.h"

void func_020c8318(void *arg0, s32 arg1) {
    s32 temp_r2;

    M2C_FIELD((arg0 + ((u32) (M2C_FIELD(arg0, s32 *, 0x1C) << 0x19) >> 0x17)), s32 *, 0x24) = arg1;
    temp_r2                                                                                 = M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) ((temp_r2 & ~0x7F) | ((((u32) (temp_r2 << 0x19) >> 0x19) + 1) & 0x7F));
}
