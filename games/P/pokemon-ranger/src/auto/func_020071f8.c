#include "m2c.h"

void func_020071f8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x20) = arg5;
    M2C_FIELD(arg0, s32 *, 0x24) = arg6;
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) ((M2C_FIELD(arg0, s32 *, 0xC) & ~1) | 1);
}
