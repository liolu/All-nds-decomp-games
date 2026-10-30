#include "m2c.h"

void func_020563f8(void *arg0, s32 arg1, s16 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x18)  = 1;
    M2C_FIELD(arg0, s32 *, 0x54) = arg1;
    M2C_FIELD(arg0, s8 *, 0x10)  = 1;
    M2C_FIELD(arg0, s16 *, 4)    = arg2;
    M2C_FIELD(arg0, s8 *, 0)     = 0;
    M2C_FIELD(arg0, s8 *, 1)     = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
