#include "m2c.h"

void func_0204eac0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 *, 0x2021)  = 1;
    M2C_FIELD(arg0, s8 *, 0x2022)  = 0;
    M2C_FIELD(arg0, s32 *, 0x2024) = arg1;
    M2C_FIELD(arg0, s32 *, 0x2028) = arg2;
    M2C_FIELD(arg0, s32 *, 0x202C) = 0;
    M2C_FIELD(arg0, s32 *, 0x2030) = 0;
}
