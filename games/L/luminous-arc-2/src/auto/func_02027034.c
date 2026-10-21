#include "m2c.h"

s32 func_0202705c();                                /* extern */

void func_02027034(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0)   = func_0202705c();
    M2C_FIELD(arg0, s32 *, 4)   = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, s32 *, 8)   = 0;
}
