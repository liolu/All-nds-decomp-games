#include "m2c.h"

M2C_UNK func_02070148(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020701b8(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02070348(M2C_UNK, M2C_UNK);                /* extern */

s32 func_02070be4(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02070348(1, 2);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02070148(2, arg0);
    var_r0 = func_020701b8(2, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
