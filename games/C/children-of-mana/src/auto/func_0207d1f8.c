/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

s32 func_0207d1f8(s32 arg0, s32 arg1) {
    s32 *temp_r2;
    s32 var_ip;
    s32 var_r3;

    var_ip = -1;
    var_r3 = 0;
loop_1:
    temp_r2 = M2C_FIELD((arg0 + (var_r3 * 4)), s32 **, 0x5C);
    if ((temp_r2 != NULL) && (arg1 == *temp_r2)) {
        var_ip = var_r3;
    } else {
        var_r3 += 1;
        if (var_r3 < 0x80) {
            goto loop_1;
        }
    }
    return var_ip;
}
