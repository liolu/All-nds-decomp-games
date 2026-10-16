#include "m2c.h"

s32 func_020179a0(M2C_UNK, s32, M2C_UNK);           /* extern */

s32 func_02018298(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (func_020179a0(5, (arg0 << 8) & 0x7F00, 0) >= 0) {
        var_r4 = 1;
    }
    return var_r4;
}
