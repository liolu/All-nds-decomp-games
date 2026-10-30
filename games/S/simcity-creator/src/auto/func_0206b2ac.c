#include "m2c.h"

s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_0205eb00();                                /* extern */

void func_0206b2ac(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(0x118);
    if (var_r0 != 0) {
        var_r0 = func_0205eb00();
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r0;
}
