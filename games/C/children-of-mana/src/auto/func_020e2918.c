#include "m2c.h"

s32 func_020e2918(void *arg0) {
    s32 var_r2;
    s32 var_r3;
    void *var_r0;

    var_r0 = arg0;
    var_r3 = 0;
    var_r2 = 0;
loop_1:
    if (M2C_FIELD(var_r0, s32 *, 8) == 1) {
        var_r3 = 1;
    } else {
        var_r2 += 1;
        var_r0 += 0x30;
        if (var_r2 < 8) {
            goto loop_1;
        }
    }
    return var_r3;
}
