#include "m2c.h"

void func_020707c0(void *arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (M2C_FIELD(arg0, volatile u16 *, 2) & 1) {
        var_r1 = 0 - var_r1;
    }
    if ((M2C_FIELD(arg0, volatile u16 *, 0) == 2) && ((s32) (M2C_FIELD(arg0, volatile s32 *, 0x10) * var_r1) < 0)) {
        M2C_FIELD(arg0, volatile u16 *, 2) = (u16) (M2C_FIELD(arg0, volatile u16 *, 2) & ~2);
    }
    M2C_FIELD(arg0, volatile s32 *, 0x10) = var_r1;
}
