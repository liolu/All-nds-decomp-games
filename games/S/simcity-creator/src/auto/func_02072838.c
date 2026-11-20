#include "m2c.h"

s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_0205fb6c();                                /* extern */
M2C_UNK func_0205fbd8();                            /* extern */

void func_02072838(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(0x14);
    if (var_r0 != 0) {
        var_r0 = func_0205fb6c();
    }
    M2C_FIELD(arg0, s32 *, 0x5A418) = var_r0;
    func_0205fbd8();
}
