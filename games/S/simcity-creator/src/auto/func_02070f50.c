/* compiler: 2.0/sp1p5 -flag no-opt_rebuildlogicals */
#include "m2c.h"

s32 func_02070f50(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r2;
    s32 var_r0;

    temp_r2 = M2C_FIELD((arg0 + (arg1 << 9) + (arg2 * 4)), s32 *, 0x3C0C0);
    var_r0  = 0;
    if ((temp_r2 != 0) && (temp_r2 != -1)) {
        var_r0 = 1;
    }
    return var_r0;
}
