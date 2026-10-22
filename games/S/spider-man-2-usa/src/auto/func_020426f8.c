#include "m2c.h"

u32 func_020426f8(u32 arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_r1;
    u32 var_r0;
    u32 var_r3;

    var_r0 = arg0;
    var_r1 = arg1;
    var_r3 = 0;
    do {
        temp_r2 = var_r3 | (var_r0 & 1);
        var_r1 -= 1;
        var_r0 = var_r0 >> 1;
        var_r3 = temp_r2 * 2;
    } while (var_r1 > 0);
    return var_r3 >> 1;
}
