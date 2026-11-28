#include "m2c.h"

s32 func_020123ac(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_02012418(M2C_UNK, s32, M2C_UNK);           /* extern */
M2C_UNK func_02086110(s32, s32, s32);               /* extern */
extern s32 data_020e90c0;
extern s32 data_020e90c8;
extern s32 data_020e90cc;
extern s32 data_020e90d0;

s32 func_02006f38(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 var_r4;
    s32 var_r6;

    var_r6 = arg2;
    var_r4 = 0;
    if (((s32) data_020e90cc >= (s32) data_020e90c0) && ((s32) data_020e90cc < (s32) data_020e90d0)) {
        temp_r3 = data_020e90cc - data_020e90c0;
        temp_r0 = 0x400 - temp_r3;
        var_r4  = var_r6;
        if (var_r6 > temp_r0) {
            var_r4 = temp_r0;
        }
        if (var_r4 > var_r6) {
            var_r4 = var_r6;
        }
        func_02086110(arg1, data_020e90c8 + temp_r3, var_r4);
        var_r6 -= var_r4;
        data_020e90cc += var_r4;
    }
    if (var_r6 > 0) {
        if (func_020123ac(arg0, data_020e90cc, 0) < 0) {
            return -1;
        }
        temp_r0_2 = func_02012418(arg0, data_020e90c8, 0x400);
        if (temp_r0_2 < 0) {
            return -1;
        }
        data_020e90c0 = data_020e90cc;
        data_020e90d0 = data_020e90cc + temp_r0_2;
        return func_02006f38(arg0, arg1 + var_r4, var_r6, var_r4 + arg3);
    }
    return var_r4;
}
