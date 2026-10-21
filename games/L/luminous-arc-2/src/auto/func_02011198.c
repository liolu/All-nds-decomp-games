#include "m2c.h"

M2C_UNK func_020101e0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02010250(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02010398();                                /* extern */

s32 func_02011198(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02010398();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020101e0(1, arg0);
    var_r0 = func_02010250(1, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
