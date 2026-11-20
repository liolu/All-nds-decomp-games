#include "m2c.h"

s32 func_0201a224(s32, s32);                        /* extern */

s32 func_0208d6c8(s32 arg0, u32 arg1, void *arg2, s32 arg3) {
    s32 var_r4;
    u16 temp_ip;
    u16 temp_r2;

    temp_ip = M2C_FIELD(arg2, u16 *, 0x18);
    var_r4  = arg3;
    if (arg1 >= (u32) temp_ip) {
        var_r4 = 0;
    } else {
        temp_r2 = M2C_FIELD(arg2, u16 *, 0x1A);
        if (arg1 > (u32) temp_r2) {
            var_r4 -= func_0201a224(var_r4 * (arg1 - temp_r2), temp_ip - temp_r2);
        }
    }
    return var_r4;
}
