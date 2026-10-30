/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s8 *func_020b3c24(s32 arg0, s8 *arg1, s8 *arg2) {
    s8 *var_r1;
    s8 var_r3;

    var_r1 = arg1;
    var_r3 = *var_r1;
    if (var_r3 != 0) {
    loop_2:
        if (var_r3 == *arg2) {
            *var_r1 = 0;
            var_r1 += 1;
        } else {
            var_r1 += 1;
            var_r3 = *var_r1;
            if (var_r3 != 0) {
                goto loop_2;
            }
        }
    }
    if (*var_r1 == 0) {
        var_r1 = NULL;
    }
    return var_r1;
}
