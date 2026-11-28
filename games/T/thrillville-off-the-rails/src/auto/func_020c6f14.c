#include "m2c.h"

void func_020c6f14(void *arg0, s16 arg1) {
    s32 temp_r2;

    M2C_FIELD((arg0 + ((u32) (M2C_FIELD(arg0, s32 *, 0xA8) << 0x1D) >> 0x1C)), s16 *, 0x98) = arg1;
    temp_r2                                                                                 = M2C_FIELD(arg0, s32 *, 0xA8);
    M2C_FIELD(arg0, s32 *, 0xA8) = (s32) ((temp_r2 & ~7) | ((((u32) (temp_r2 << 0x1D) >> 0x1D) + 1) & 7));
}
