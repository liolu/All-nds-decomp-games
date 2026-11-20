#include "m2c.h"

M2C_UNK func_0200ebb8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0200ec28(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0200ed70();                                /* extern */

s32 func_0200f778(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_0200ed70();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0200ebb8(1, arg0);
    var_r0 = func_0200ec28(1, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
