#include "m2c.h"

void func_020b7454(void *arg0, s16 arg1, s16 arg2, s16 arg3, u16 arg4) {
    M2C_FIELD(arg0, s16 *, 0x154) = arg1;
    M2C_FIELD(arg0, s16 *, 0x156) = arg2;
    M2C_FIELD(arg0, s16 *, 0x158) = arg3;
    M2C_FIELD(arg0, u16 *, 0x15A) = arg4;
}
