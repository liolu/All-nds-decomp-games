#include "m2c.h"

void func_020b5158(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    M2C_FIELD(arg0, s16 *, 0xA)  = arg1;
    M2C_FIELD(arg0, s16 *, 0xC)  = arg2;
    M2C_FIELD(arg0, s16 *, 0xE)  = arg3;
    M2C_FIELD(arg0, s16 *, 0x10) = arg4;
    M2C_FIELD(arg0, s8 *, 8)     = 0;
}
