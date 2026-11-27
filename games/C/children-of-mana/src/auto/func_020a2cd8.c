#include "m2c.h"

void func_020a2cd8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4)    = 5;
    M2C_FIELD(arg0, s32 *, 8)    = 2;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
}
