#include "m2c.h"

s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_02046f18();                                /* extern */
M2C_UNK func_02046f50(s32, M2C_UNK);                /* extern */

void func_0206eb9c(void *arg0, M2C_UNK arg1) {
    s32 var_r0;

    var_r0 = func_020348ec(0x354);
    if (var_r0 != 0) {
        var_r0 = func_02046f18();
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0;
    func_02046f50(var_r0, arg1);
}
