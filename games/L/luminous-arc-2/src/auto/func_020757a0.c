#include "m2c.h"

void func_020757a0(void *arg0, s32 arg1) {
    s32 temp_r1;

    temp_r1                      = arg1 << 0x10;
    M2C_FIELD(arg0, s32 *, 0x48) = temp_r1;
    M2C_FIELD(arg0, s32 *, 0x40) = temp_r1;
    M2C_FIELD(arg0, s16 *, 0x4C) = 0;
    M2C_FIELD(arg0, u16 *, 8)    = (u16) (M2C_FIELD(arg0, u16 *, 8) | 0x40);
}
