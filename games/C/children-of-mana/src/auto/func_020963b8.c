/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_020963b8(s32 arg0) {
    s32 var_r2;

    var_r2 = 0;
loop_1:
    if (M2C_FIELD((arg0 + (var_r2 * 4)), s32 *, 4) == 0) {
        return 1;
    }
    var_r2 += 1;
    if (var_r2 >= 0x55) {
        return 0;
    }
    goto loop_1;
}
