#include "m2c.h"

void func_020068b8(void *arg0) {
    s32 temp_r3;

    temp_r3                   = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r3 + 1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD((M2C_FIELD(arg0, s32 *, 0) + temp_r3), u8 *, 4));
}
