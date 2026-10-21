#include "m2c.h"

s32 func_0201e240(M2C_UNK, s32, M2C_UNK);           /* extern */

s32 func_0201e9bc(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (func_0201e240(5, (arg0 << 8) & 0x7F00, 0) >= 0) {
        var_r4 = 1;
    }
    return var_r4;
}
