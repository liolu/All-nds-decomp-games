#include "m2c.h"

void func_020ac2a8(void *arg0, s32 arg1, s8 arg2) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    M2C_FIELD(arg0, s8 *, 0x44)  = arg2;
}
