/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_ov000_021d2228();                          /* extern */

s32 func_020a9f20(s32 arg0) {
    s32 temp_r0;
    s32 var_r2;

    if (arg0 == -1) {
        return -1;
    }
    if (func_ov000_021d2228() == 0) {
        return -1;
    }
    temp_r0 = func_ov000_021d2228();
    var_r2  = 0;
loop_5:
    if (arg0 != M2C_FIELD((temp_r0 + (var_r2 * 2)), s16 *, 0x50)) {
        var_r2 += 1;
        if (var_r2 >= 3) {
            var_r2 = -1;
        } else {
            goto loop_5;
        }
    }
    return var_r2;
}
