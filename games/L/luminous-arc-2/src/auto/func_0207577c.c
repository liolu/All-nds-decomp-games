#include "m2c.h"

void func_0207577c(void *arg0, s32 arg1) {
    s32 temp_r1;

    temp_r1                      = arg1 << 0x10;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_r1;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r1;
    M2C_FIELD(arg0, s16 *, 0x3C) = 0;
    M2C_FIELD(arg0, u16 *, 8)    = (u16) (M2C_FIELD(arg0, u16 *, 8) | 0x20);
}
