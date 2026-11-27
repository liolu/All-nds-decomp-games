#include "m2c.h"

M2C_UNK func_020de4c8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020de538(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020de6c8(M2C_UNK, M2C_UNK);                /* extern */

s32 func_020df90c(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_020de6c8(1, 5);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020de4c8(0xB, arg0);
    var_r0 = func_020de538(0xB, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
