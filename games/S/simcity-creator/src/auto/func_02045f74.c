/* compiler: 2.0/sp1p5 -flag no-opt_rebuildconditionals */
#include "m2c.h"

void func_02045f74(void *arg0, s32 arg1) {
    s32 var_r1;

    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    if (arg1 == 1) {
        var_r1 = 0;
    } else {
        var_r1 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r1;
}
