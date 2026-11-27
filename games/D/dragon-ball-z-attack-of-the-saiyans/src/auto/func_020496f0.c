#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0202a64c(M2C_UNK);                     /* extern */

s32 func_020496f0(M2C_UNK arg0) {
    M2C_UNK var_r0;

    if (func_02012a90(arg0, 1) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    func_0202a64c(var_r0);
    return 1;
}
