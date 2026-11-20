#include "m2c.h"

void func_0204eb14(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s8 *, 0x2021)  = 3;
    M2C_FIELD(arg0, s8 *, 0x2022)  = 0;
    M2C_FIELD(arg0, s32 *, 0x2024) = arg1;
    M2C_FIELD(arg0, s32 *, 0x2028) = arg2;
    M2C_FIELD(arg0, s32 *, 0x202C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x2030) = arg4;
}
