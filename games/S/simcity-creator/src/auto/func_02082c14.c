#include "m2c.h"

s32 func_02072794(M2C_UNK, M2C_UNK);                /* extern */

s32 func_02082c14(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r0;

    var_r0 = func_02072794(arg0, 0x2D) + 5;
    if (arg3 != 0) {
        var_r0 = (s32) (var_r0 * arg3) >> 0xC;
    }
    return var_r0;
}
