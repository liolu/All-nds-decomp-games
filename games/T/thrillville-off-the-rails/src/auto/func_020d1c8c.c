#include "m2c.h"

s32 func_020d1c8c(void *arg0) {
    s32 temp_r1;
    s32 var_r2;
    s32 var_r3;
    void *var_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0xE8);
    var_r3  = 0;
    if (temp_r1 < 6) {
        var_r2 = 0;
        var_r1 = arg0 + (temp_r1 * 5);
        do {
            var_r2 += 1;
            var_r3 += M2C_FIELD(var_r1, u8 *, 0xC8);
            var_r1 += 1;
        } while (var_r2 < 5);
    }
    return var_r3;
}
