/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020ce12c;

u8 func_02052a94(void *arg0, s32 arg1, u32 arg2) {
    s32 var_ip;
    u32 temp_r2;
    u32 var_r3;
    u8 var_r0;

    if (M2C_FIELD(&data_020ce12c, u8 *, 0x44) != (arg1 + 1)) {
        return 0U;
    }
    var_ip = 0;
    if (arg2 > 1U) {
        var_r3  = 0;
        temp_r2 = arg2 - 1;
        if (temp_r2 != 0) {
            do {
                var_ip |= 1 << var_r3;
                var_r3 += 1;
            } while (var_r3 < temp_r2);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x2B110) == var_ip) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
