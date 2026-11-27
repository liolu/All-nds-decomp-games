/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020e2724(void *arg0) {
    s32 var_ip;
    s32 var_r3;
    void *var_r0;

    var_r0 = arg0;
    var_ip = 1;
    var_r3 = 0;
loop_1:
    if ((M2C_FIELD(var_r0, s32 *, 0xC) != -1) && (M2C_FIELD(var_r0, s32 *, 8) == 1) && (M2C_FIELD(var_r0, u8 *, 0x34) == 0)) {
        var_ip = 0;
    } else {
        var_r3 += 1;
        var_r0 += 0x30;
        if (var_r3 < 8) {
            goto loop_1;
        }
    }
    return var_ip;
}
