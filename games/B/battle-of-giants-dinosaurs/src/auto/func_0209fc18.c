#include "m2c.h"

void func_0209fc18(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (arg2 + 0x40);
}
