#include "m2c.h"

void func_0205642c(void *arg0, s8 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x18)  = 1;
    M2C_FIELD(arg0, s8 *, 0)     = 0;
    M2C_FIELD(arg0, s8 *, 1)     = 0;
    M2C_FIELD(arg0, s8 *, 0x10)  = arg1;
    M2C_FIELD(arg0, s32 *, 0x54) = 2;
}
