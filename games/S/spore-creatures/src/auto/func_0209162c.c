#include "m2c.h"

void func_0209162c(void *arg0, s32 arg1, s32 arg2, s16 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    M2C_FIELD(arg0, s16 *, 0x10) = arg3;
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) ((arg4 + 1) << 5);
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) arg4;
}
