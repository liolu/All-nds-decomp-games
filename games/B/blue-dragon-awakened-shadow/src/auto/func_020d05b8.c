/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_020d05b8(s32 arg0) {
    s32 var_r2;

    var_r2 = 0;
loop_1:
    if (M2C_FIELD((arg0 + (var_r2 * 8)), u8 *, 0xF01) == 0) {
        return var_r2;
    }
    var_r2 += 1;
    if (var_r2 >= 6) {
        return -1;
    }
    goto loop_1;
}
