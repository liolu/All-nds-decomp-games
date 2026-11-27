#include "m2c.h"

void func_020d3e4c(void *arg0, s8 arg1, s8 arg2) {
    if (M2C_FIELD(arg0, s32 *, 4) != 3) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 4)   = 2;
    M2C_FIELD(arg0, s8 *, 0x44) = arg1;
    M2C_FIELD(arg0, s8 *, 0x45) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s8 *, 0x46) = 0;
}
