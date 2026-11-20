#include "m2c.h"

s32 func_0201c548();                                /* extern */
M2C_UNK func_0201c578();                            /* extern */
s32 func_020348ec(M2C_UNK);                         /* extern */

void func_02053070(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(1);
    if (var_r0 != 0) {
        var_r0 = func_0201c548();
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r0;
    func_0201c578();
}
