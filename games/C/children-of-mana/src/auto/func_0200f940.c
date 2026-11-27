/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f940(s8 *arg0) {
    s32 var_ip;
    s8 *var_r0;
    s8 var_r3;
    u8 temp_r2;

    var_r0 = arg0;
    var_r3 = *var_r0;
    var_ip = 0;
    if (var_r3 != 0) {
        do {
            temp_r2 = (u8) var_r3;
            var_r0 += 1;
            var_r3 = *var_r0;
            var_ip = (0x1F * var_ip) + temp_r2;
        } while (var_r3 != 0);
    }
    return var_ip & 0xFFF;
}
