#include "m2c.h"

s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_02060564();                                /* extern */

void func_0206b510(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(0xFA0);
    if (var_r0 != 0) {
        var_r0 = func_02060564();
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_r0;
}
