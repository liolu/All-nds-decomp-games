#include "m2c.h"

M2C_UNK func_020101e0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02010250(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_020103e0(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

s32 func_02012c84(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_020103e0(2, 7, 9);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020101e0(0x21, arg0);
    var_r0 = func_02010250(0x21, 1, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
