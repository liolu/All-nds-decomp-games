#include "m2c.h"

s32 func_020b16e8();                                /* extern */
s32 func_020b2538();                                /* extern */
s32 func_020b6074();                                /* extern */
s32 func_020b62c0();                                /* extern */
s32 func_020b8f60();                                /* extern */
s32 func_020b9064();                                /* extern */

s32 func_020b4a7c(s32 arg0, void *arg1, s32 arg2) {
    s32 var_ip;
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg1, u32 *, 0);
    var_ip  = 0;
    switch (temp_r3) {
        default:
            break;
        case 0:
            var_ip = func_020b16e8(arg0, arg1, arg2);
            break;
        case 1:
            var_ip = func_020b6074(arg0, arg1, arg2);
            break;
        case 5:
            var_ip = func_020b62c0(arg0, arg1, arg2);
            break;
        case 2:
            var_ip = func_020b2538(arg0, arg1, arg2);
            break;
        case 4:
            var_ip = func_020b8f60(arg0, arg1, arg2);
            break;
        case 6:
            var_ip = func_020b9064(arg0, arg1, arg2);
            break;
    }
    if (var_ip != 0) {
        M2C_FIELD(arg1, s32 *, 0x1C) = var_ip;
    }
    return var_ip;
}
