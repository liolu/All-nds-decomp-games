#include "m2c.h"

s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_02063b3c();                                /* extern */

void func_0206b4b4(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(0x3D0);
    if (var_r0 != 0) {
        var_r0 = func_02063b3c();
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0;
}
