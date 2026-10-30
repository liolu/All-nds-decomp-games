#include "m2c.h"

M2C_UNK func_02074fe4(void *, s32, s32);            /* extern */

void func_02074e6c(void *arg0, s32 arg1) {
    s32 var_r5;

    var_r5                      = 0;
    M2C_FIELD(arg0, s32 *, 4)   = arg1;
    M2C_FIELD(arg0, s8 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    do {
        func_02074fe4(arg0, var_r5, 0);
        var_r5 += 1;
    } while (var_r5 < 0xC);
}
