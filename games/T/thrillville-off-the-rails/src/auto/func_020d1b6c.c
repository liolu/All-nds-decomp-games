#include "m2c.h"

s32 func_020d1b6c(void *arg0) {
    s32 var_r2;
    s32 var_r3;
    u8 temp_r0;
    void *var_r1;

    var_r3 = 0;
    var_r2 = 0;
    var_r1 = arg0 + (M2C_FIELD(arg0, s32 *, 0xE8) * 5);
    do {
        temp_r0 = M2C_FIELD(var_r1, u8 *, 0x8C);
        var_r2 += 1;
        var_r1 += 1;
        if (temp_r0 != 0) {
            var_r3 += 1;
        }
    } while (var_r2 < 5);
    return var_r3;
}
