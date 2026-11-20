#include "m2c.h"

s8 *func_020b39d8(s32 arg0, s8 *arg1) {
    s8 *var_r1;
    s8 var_r0;

    var_r1 = arg1;
    var_r0 = *var_r1;
    if (var_r0 != 0) {
    loop_1:
        if (var_r0 == 0xD) {
            var_r1 += 1;
        }
        if (*var_r1 == 0xA) {
            var_r1 += 1;
        } else {
            var_r1 += 1;
            var_r0 = *var_r1;
            if (var_r0 != 0) {
                goto loop_1;
            }
        }
    }
    return var_r1;
}
