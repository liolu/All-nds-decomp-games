#include "m2c.h"

void func_02091e90(s32 arg0, void *arg1, s16 arg2, s16 arg3, u16 arg4, u16 arg5) {
    M2C_FIELD(arg1, s16 *, 0) = arg2;
    M2C_FIELD(arg1, s16 *, 2) = arg3;
    M2C_FIELD(arg1, u16 *, 4) = arg4;
    M2C_FIELD(arg1, u16 *, 6) = arg5;
}
