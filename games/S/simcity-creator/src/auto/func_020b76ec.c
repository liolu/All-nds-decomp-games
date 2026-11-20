#include "m2c.h"

void func_020b76ec(void *arg0, s32 arg1, s16 arg2, s16 arg3, s16 arg4) {
    M2C_FIELD(arg0, s32 *, 0x9F8) = arg1;
    M2C_FIELD(arg0, s16 *, 0x9FC) = arg2;
    M2C_FIELD(arg0, s16 *, 0x9FE) = arg3;
    M2C_FIELD(arg0, s16 *, 0xA00) = arg4;
}
