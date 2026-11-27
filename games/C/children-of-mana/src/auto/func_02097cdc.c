#include "m2c.h"

void func_02097cdc(void *arg0, s8 arg1, s16 arg2) {
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0xE0) * 4)), s8 *, 0x9E)  = arg1;
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0xE0) * 4)), s16 *, 0xA0) = arg2;
    M2C_FIELD(arg0, s32 *, 0xE0)                                        = (s32) (M2C_FIELD(arg0, s32 *, 0xE0) + 1);
}
