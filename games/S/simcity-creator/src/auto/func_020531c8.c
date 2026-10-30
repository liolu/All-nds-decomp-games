#include "m2c.h"

s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_020b15f8();                                /* extern */

void func_020531c8(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(1);
    if (var_r0 != 0) {
        var_r0 = func_020b15f8();
    }
    M2C_FIELD(arg0, s32 *, 0xBB54) = var_r0;
}
