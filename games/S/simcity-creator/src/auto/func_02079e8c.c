#include "m2c.h"

s32 func_02079e8c(s32 arg0, u32 arg1) {
    u32 var_r1;

    var_r1 = arg1;
    if (var_r1 > 0x16U) {
        var_r1 = 0x16;
    }
    return M2C_FIELD((arg0 + (var_r1 * 4)), s32 *, 0x24A4);
}
