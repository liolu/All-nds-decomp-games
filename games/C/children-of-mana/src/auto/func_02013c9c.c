/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

void func_02013c9c(s32 arg0) {
    s32 var_r2;

    var_r2 = 0;
loop_1:
    if (M2C_FIELD((arg0 + (var_r2 * 4)), s32 *, 4) == 0) {
        return;
    }
    var_r2 += 1;
    if (var_r2 >= 0x100) {
        return;
    }
    goto loop_1;
}
