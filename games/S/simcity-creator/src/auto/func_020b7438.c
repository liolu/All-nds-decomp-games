#include "m2c.h"

void func_020b7438(void *arg0, s16 arg1, s16 arg2, s16 arg3, u16 arg4) {
    M2C_FIELD(arg0, s16 *, 0x14C) = arg1;
    M2C_FIELD(arg0, s16 *, 0x14E) = arg2;
    M2C_FIELD(arg0, s16 *, 0x150) = arg3;
    M2C_FIELD(arg0, u16 *, 0x152) = arg4;
}
