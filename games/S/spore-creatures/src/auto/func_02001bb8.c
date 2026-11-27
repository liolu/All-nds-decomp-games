#include "m2c.h"

s32 func_020019c0(s32);                             /* extern */
M2C_UNK func_02001c68(s32, s32, M2C_UNK);           /* extern */

void func_02001bb8(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg0;
    var_r4 = 0;
    do {
        if (arg1 == func_020019c0(var_r5)) {
            func_02001c68(arg0, var_r4, arg2);
        }
        var_r4 += 1;
        var_r5 += 0x14;
    } while (var_r4 < 0x42);
}
