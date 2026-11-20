#include "m2c.h"

s32 func_020348ec(s32);                             /* extern */
s32 func_0206b9dc();                                /* extern */
M2C_UNK func_0206ba14();                            /* extern */

void func_0206b204(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(0x738);
    if (var_r0 != 0) {
        var_r0 = func_0206b9dc();
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r0;
    func_0206ba14();
}
