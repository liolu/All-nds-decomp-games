/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_020dddc0(s32);                         /* extern */

s32 func_020dde08(s32 arg0) {
    s32 var_r1;
    s32 var_r2;

    var_r1 = -1;
    var_r2 = 0;
loop_1:
    if (M2C_FIELD((arg0 + (var_r2 << 6)), s32 *, 0x94) == 0) {
        var_r1 = var_r2;
    } else {
        var_r2 += 1;
        if (var_r2 < 6) {
            goto loop_1;
        }
    }
    if (var_r1 >= 0) {
        return arg0 + 0x58 + (var_r1 << 6);
    }
    func_020dddc0(arg0);
    return arg0 + 0x198;
}
