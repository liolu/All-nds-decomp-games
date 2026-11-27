#include "m2c.h"

void func_020030d0(void *arg0, s16 arg1, void *arg2) {
    M2C_FIELD(arg0, s16 *, 8)  = arg1;
    M2C_FIELD(arg0, s8 *, 0xA) = 1;
    M2C_FIELD(arg0, s32 *, 0)  = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4)  = (s32) M2C_FIELD(arg2, s32 *, 4);
}
