#include "m2c.h"

void func_0209fed0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x60) = arg1;
    M2C_FIELD(arg0, s32 *, 0x64) = arg2;
    M2C_FIELD(arg0, s8 *, 0x78)  = 1;
}
