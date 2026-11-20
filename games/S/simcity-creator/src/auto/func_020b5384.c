#include "m2c.h"

void func_020b5384(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    M2C_FIELD(arg0, s16 *, 0x20) = arg1;
    M2C_FIELD(arg0, s16 *, 0x22) = arg2;
    M2C_FIELD(arg0, s16 *, 0x24) = arg3;
    M2C_FIELD(arg0, s16 *, 0x26) = arg4;
    M2C_FIELD(arg0, s8 *, 0x1E)  = 0;
}
