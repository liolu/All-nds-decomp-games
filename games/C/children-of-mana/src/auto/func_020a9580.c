#include "m2c.h"

void func_020a9580(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0)    = 1;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) << 0xC);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (arg2 << 0xC);
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
}
