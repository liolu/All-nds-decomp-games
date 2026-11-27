#include "m2c.h"

s32 func_02053f18(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = M2C_FIELD((arg0 + (arg1 * 8)), s32 *, 0x408);
    if (var_r0 != 0) {
        var_r0 -= 4;
    }
    return var_r0;
}
