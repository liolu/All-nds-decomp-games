#include "m2c.h"

void func_020ac448(void *arg0, s16 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0)    = 1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg3;
    M2C_FIELD(arg0, s16 *, 0xC)  = arg1;
    M2C_FIELD(arg0, s32 *, 4)    = (s32) (arg2 << 0xC);
}
