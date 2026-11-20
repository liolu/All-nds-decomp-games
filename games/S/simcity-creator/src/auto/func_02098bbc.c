/* compiler: 2.0/sp1p5 -pid */
#include "m2c.h"

s32 func_02098b2c(M2C_UNK, s32);                    /* extern */

void func_02098bbc(M2C_UNK arg0, s32 *arg1, s32 *arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r1;
    s32 var_r2;

    temp_r5 = arg3 * 0x1C;
    temp_r4 = temp_r5 + 0x20;
    temp_r0 = func_02098b2c(arg0, arg3);
    if (temp_r0 == 0) {
        return;
    }
    temp_r1 = temp_r0 * 0x11;
    var_r2  = (temp_r5 + 8) - (temp_r1 >> 1);
    var_r1  = var_r2 + temp_r1 + 0x10;
    if (temp_r5 < var_r2) {
        var_r2 = temp_r5;
    }
    if (temp_r4 > var_r1) {
        var_r1 = temp_r4;
    }
    if (var_r2 < 0) {
        var_r1 -= var_r2;
        var_r2 = 0;
    } else if (var_r1 > 0x100) {
        temp_r0_2 = var_r1 - 0x100;
        var_r1    = 0x101;
        var_r2 -= temp_r0_2;
    }
    *arg1 = var_r2;
    *arg2 = var_r1;
}
