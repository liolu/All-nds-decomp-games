/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_02027e10(s32 arg0, u16 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_ip;
    s32 var_r2;
    u16 var_r1;

    var_r1  = arg1;
    var_r2  = arg2;
    temp_r3 = var_r1 - arg0;
    if (temp_r3 < 0) {
        var_ip = 0 - temp_r3;
    } else {
        var_ip = temp_r3;
    }
    if (var_ip >= var_r2) {
        if (temp_r3 < 0) {
            if (var_ip >= 0x7FFF) {
                var_r2 = 0 - var_r2;
            }
            var_r1 = arg0 - var_r2;
        } else {
            if (var_ip >= 0x7FFF) {
                var_r2 = 0 - var_r2;
            }
            var_r1 = arg0 + var_r2;
        }
    }
    return var_r1;
}
