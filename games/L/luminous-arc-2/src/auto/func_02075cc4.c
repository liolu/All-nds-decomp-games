#include "m2c.h"

void func_02075cc4(void *arg0, s8 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 *, 9) = arg1;
    if (arg2 == 1) {
        M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) | 0x40);
    }
}
