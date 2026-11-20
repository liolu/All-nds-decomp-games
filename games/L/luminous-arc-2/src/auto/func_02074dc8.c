/* compiler: 2.0/sp1p5 -flag no-opt_rebuildconditionals */
#include "m2c.h"

void *func_02074dc8(u8 *arg0, s32 arg1, s32 arg2, void *arg3) {
    s8 var_r1_2;
    u8 var_r1;

    var_r1 = *arg0;
    if (var_r1 == 2) {
        var_r1 = 1;
    }
    M2C_FIELD(arg3, u8 *, 0x79) = var_r1;
    if (var_r1 == 0) {
        var_r1_2 = 0;
    } else {
        var_r1_2 = 1;
    }
    M2C_FIELD(arg3, s8 *, 0x7A) = var_r1_2;
    return arg0 + 1;
}
