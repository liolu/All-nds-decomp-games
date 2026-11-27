#include "m2c.h"

void func_02047940(void *arg0, void *arg1, s32 arg2) {
    s32 var_r3;

    if (arg1 == NULL) {
        return;
    }
    if (arg2 == 2) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    M2C_FIELD(arg0, u32 *, 0x4C) = (u32) ((u32) ((u32) (M2C_FIELD(arg1, s32 *, 8) << 0x10) >> 0xD) >> (4 - var_r3));
}
