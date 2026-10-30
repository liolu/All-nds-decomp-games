#include "m2c.h"

void *func_020b3374(s32 arg0, s8 *arg1) {
    s8 *var_r1;

    var_r1 = arg1;
    if (*var_r1 != 0xA) {
        do {
            var_r1 += 1;
        } while (*var_r1 != 0xA);
    }
    return var_r1 + 1;
}
