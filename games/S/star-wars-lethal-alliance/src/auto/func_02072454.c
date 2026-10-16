#include "m2c.h"

M2C_UNK func_02070148(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020701b8(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_02070348(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

s32 func_02072454(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02070348(2, 7, 9);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02070148(0x21, arg0);
    var_r0 = func_020701b8(0x21, 1, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
