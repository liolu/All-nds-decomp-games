/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_020d060c(s32 arg0, s32 arg1) {
    s32 var_r3;

    var_r3 = 0;
loop_1:
    if (arg1 == M2C_FIELD((arg0 + (var_r3 * 8)), u8 *, 0xF02)) {
        return arg0 + 0xF00 + (var_r3 * 8);
    }
    var_r3 += 1;
    if (var_r3 >= 6) {
        return 0;
    }
    goto loop_1;
}
