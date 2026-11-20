#include "m2c.h"

void func_02057110(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
    M2C_FIELD(arg0, s16 *, 0x18) = arg1;
    M2C_FIELD(arg0, s16 *, 0x1A) = arg2;
    M2C_FIELD(arg0, s16 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s16 *, 0x1E) = arg2;
    M2C_FIELD(arg0, s16 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s16 *, 0x2C) = 0;
    M2C_FIELD(arg0, s16 *, 0x2E) = arg4;
    M2C_FIELD(arg0, s16 *, 0x22) = arg3;
    M2C_FIELD(arg0, s16 *, 0x50) = 0;
}
