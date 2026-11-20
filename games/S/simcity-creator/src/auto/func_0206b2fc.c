#include "m2c.h"

s32 func_020348ec(s32);                             /* extern */
s32 func_02061784(s32, s32);                        /* extern */

void func_0206b2fc(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(0x1430);
    if (var_r0 != 0) {
        var_r0 = func_02061784(var_r0, M2C_FIELD(arg0, s32 *, 4));
    }
    M2C_FIELD(arg0, s32 *, 0x28) = var_r0;
}
