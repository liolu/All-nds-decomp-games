#include "m2c.h"

s32 func_020348ec(s32);                             /* extern */
s32 func_020b2648();                                /* extern */
M2C_UNK func_020b2660();                            /* extern */

void func_020a5dd0(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(0xBFA0);
    if (var_r0 != 0) {
        var_r0 = func_020b2648();
    }
    M2C_FIELD(arg0, s32 *, 0x20094) = var_r0;
    func_020b2660();
}
