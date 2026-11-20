#include "m2c.h"

s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_02053d38();                                /* extern */

void func_0206b464(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(0x8C0);
    if (var_r0 != 0) {
        var_r0 = func_02053d38();
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_r0;
}
