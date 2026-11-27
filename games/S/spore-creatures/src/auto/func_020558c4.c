#include "m2c.h"

void func_020558c4(void *arg0, s8 arg1, s32 arg2) {
    s8 var_r1;

    var_r1 = arg1;
    if (arg2 == 0) {
        var_r1 = 0xD;
    }
    M2C_FIELD(arg0, s8 *, 0x479) = var_r1;
}
