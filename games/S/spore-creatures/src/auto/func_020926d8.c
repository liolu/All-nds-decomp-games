#include "m2c.h"

extern u8 data_020e745c;

void func_020926d8(u8 *arg0) {
    u8 *var_r0;
    u8 *var_r2;

    var_r0 = arg0;
    var_r2 = &data_020e745c;
    if ((var_r0 != NULL) && (*var_r0 != 0)) {
        do {
            *var_r2 = *var_r0;
            var_r2 += 1;
            var_r0 += 1;
        } while (*var_r0 != 0);
    }
    *var_r2 = 0;
}
