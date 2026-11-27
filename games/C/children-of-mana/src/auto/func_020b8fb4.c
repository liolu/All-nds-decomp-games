#include "m2c.h"

void func_020b8fb4(void *arg0, s32 arg1, s16 arg2) {
    M2C_FIELD(arg0, s32 *, 0x238) = arg1;
    M2C_FIELD(arg0, s16 *, 0x23C) = 0;
    M2C_FIELD(arg0, s16 *, 0x23E) = arg2;
}
