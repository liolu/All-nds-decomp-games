#include "m2c.h"

void func_02061728(void *arg0, s32 arg1, s32 arg2, s16 arg3, u16 arg4) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    M2C_FIELD(arg0, s16 *, 0x18) = arg3;
    M2C_FIELD(arg0, u16 *, 0x1A) = arg4;
}
