#include "m2c.h"

s32 func_020348ec(s32);                             /* extern */
s32 func_0205a2f4();                                /* extern */

void func_0206b254(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(0x9CC);
    if (var_r0 != 0) {
        var_r0 = func_0205a2f4();
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_r0;
}
