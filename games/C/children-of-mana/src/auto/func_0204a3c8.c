#include "m2c.h"

void func_0204a3c8(void *arg0, s8 arg1) {
    if (M2C_FIELD(arg0, s32 *, 4) != 3) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 4)     = 2;
    M2C_FIELD(arg0, s32 *, 0x14C) = 0;
    M2C_FIELD(arg0, s8 *, 0x150)  = arg1;
    M2C_FIELD(arg0, s8 *, 0x152)  = 0;
}
