#include "m2c.h"

void func_020c3274(void *arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, s16 arg5, u16 arg6) {
    M2C_FIELD(arg0, s16 *, 0x10) = arg3;
    M2C_FIELD(arg0, s16 *, 0xC)  = arg5;
    M2C_FIELD(arg0, s16 *, 0xE)  = 0;
    M2C_FIELD(arg0, s16 *, 8)    = arg4;
    M2C_FIELD(arg0, s16 *, 0xA)  = 0;
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 4)    = arg2;
    M2C_FIELD(arg0, u16 *, 0x12) = arg6;
}
