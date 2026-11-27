/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_02092fc8(s32 arg0, u32 arg1, s32 arg2) {
    s32 var_ip;
    s32 var_lr;
    s32 var_r4;

    var_ip = 0;
    var_lr = 0;
    var_r4 = 0;
loop_1:
    if ((arg2 + 1) == M2C_FIELD((arg0 + (var_r4 * 8)), s32 *, 0x88)) {
        var_lr = var_r4;
    } else {
        var_r4 += 1;
        if (var_r4 < 4) {
            goto loop_1;
        }
    }
    switch (arg1) {
        default:
            break;
        case 0:
            var_ip = 0;
            break;
        case 2:
            var_ip = (var_lr << 8) + 0x500;
            break;
        case 3:
            var_ip = (var_lr * 0x3C00) + 0x1000;
            break;
        case 4:
            var_ip = 0x900;
            break;
    }
    return var_ip;
}
