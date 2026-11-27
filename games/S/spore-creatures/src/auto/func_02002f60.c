#include "m2c.h"

void func_02002f60(void *arg0, s32 arg1, s32 arg2, s8 arg3, void *arg4, void *arg5) {
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 4)    = arg2;
    M2C_FIELD(arg0, s8 *, 8)     = arg3;
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) M2C_FIELD(arg4, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg4, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg5, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg5, s32 *, 4);
    M2C_FIELD(arg0, s8 *, 9)     = 1;
}
