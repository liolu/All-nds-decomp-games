/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

u32 func_02071d1c(s32 arg0) {
    s32 temp_r1;
    u32 var_r2;
    u32 var_r3;

    var_r2 = 0;
    var_r3 = 0;
    do {
        temp_r1 = M2C_FIELD((arg0 + (var_r3 * 4)), s32 *, 0x500D4);
        var_r3 += 1;
        var_r2 += temp_r1;
    } while (var_r3 < 3U);
    return var_r2;
}
