#include "m2c.h"

u8 func_0203655c(void *arg0) {
    s32 var_r2;
    u8 temp_r1;
    u8 var_r3;

    var_r3 = 0;
    if (M2C_FIELD(arg0, u8 *, 0xA4) != 0) {
        return 1U;
    }
    var_r2 = 0;
    do {
        temp_r1 = M2C_FIELD((arg0 + var_r2), u8 *, 0x44);
        var_r2 += 1;
        if (temp_r1 != 0) {
            var_r3 += 1;
        }
    } while (var_r2 < 6);
    return var_r3;
}
