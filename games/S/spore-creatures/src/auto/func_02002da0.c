#include "m2c.h"

void func_02002da0(void *arg0, s32 arg1, s8 arg2) {
    M2C_FIELD(arg0, s8 *, 0x370)          = 1;
    M2C_FIELD((arg0 + arg1), s8 *, 0x320) = arg2;
}
