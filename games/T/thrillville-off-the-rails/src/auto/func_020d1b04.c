#include "m2c.h"

s32 func_020d1b04(s32 arg0, s32 arg1) {
    s32 var_r2;
    s32 var_r3;
    u8 temp_r0;
    void *var_r1;

    var_r2 = 0;
    var_r3 = 0;
    var_r1 = arg0 + (arg1 * 5);
    do {
        temp_r0 = M2C_FIELD(var_r1, u8 *, 0xAA);
        var_r3 += 1;
        var_r1 += 1;
        if (temp_r0 != 0) {
            var_r2 += 1;
        }
    } while (var_r3 < 5);
    return var_r2;
}
