#include "m2c.h"

s32 func_020b3534(s32 arg0, s32 arg1, s8 *arg2, s32 arg3) {
    s32 var_r3;
    s8 *var_r2;
    s8 var_ip;

    var_r2 = arg2;
    var_r3 = arg3;
    var_ip = *var_r2;
    if ((var_ip & 0xC0) == 0x80) {
        do {
            *(s8 *) (arg1 + var_r3) = var_ip;
            var_r2 += 1;
            var_ip = *var_r2;
            var_r3 += 1;
        } while ((var_ip & 0xC0) == 0x80);
    }
    return var_r3;
}