/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

u32 func_0204a550(s32 arg0) {
    s32 temp_r3;
    s32 var_r3;
    u32 var_ip;
    u32 var_lr;

    var_ip = 0;
    var_lr = 0;
    do {
        temp_r3 = M2C_FIELD((arg0 + (var_lr * 0x10)), s32 *, 0x38C);
        var_lr += 1;
        if (temp_r3 != 0) {
            var_r3 = 1;
        } else {
            var_r3 = 0;
        }
        if (var_r3 != 0) {
            var_ip += 1;
        }
    } while (var_lr < 4U);
    return var_ip;
}
