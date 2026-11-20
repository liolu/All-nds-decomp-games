/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020d0d28(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020d0e58(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020d0fac(M2C_UNK, M2C_UNK);            /* extern */

s32 func_020d1cf4(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_020d0d28(1, 1);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020d0fac(4, arg0);
    var_r0 = func_020d0e58(4, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
