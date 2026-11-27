#include "m2c.h"

void func_02074800(void *arg0, s32 arg1, s16 arg2, s8 arg3) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (arg1 << 0xC);
    M2C_FIELD(arg0, s16 *, 0x1E) = arg2;
    M2C_FIELD(arg0, s8 *, 0x20)  = arg3;
}
