#include "m2c.h"

void func_020bb0f4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x13C) = (s32) (M2C_FIELD(arg0, s32 *, 0x13C) | 2);
    M2C_FIELD(arg0, s32 *, 0x144) = arg1;
}
