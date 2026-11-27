/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_020d063c(s32 arg0) {
    s32 var_r2;
    s32 var_r3;
    u8 temp_r1;

    var_r2 = 0;
    var_r3 = 0;
    do {
        temp_r1 = M2C_FIELD((arg0 + (var_r3 * 8)), u8 *, 0xF02);
        var_r3 += 1;
        if (var_r2 > (s32) temp_r1) {
            var_r2 = (s32) temp_r1;
        }
    } while (var_r3 < 6);
    if (var_r2 >= 6) {
        return -1;
    }
    return var_r2 + 1;
}
