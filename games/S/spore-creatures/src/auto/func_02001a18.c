#include "m2c.h"

M2C_UNK func_020018e0(s32, M2C_UNK, M2C_UNK);       /* extern */

s32 func_02001a18(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_r4;
    s32 var_r7;

    var_r7 = arg0;
    var_r4 = 0;
    do {
        func_020018e0(var_r7, arg1, arg2);
        var_r4 += 1;
        var_r7 += 0x14;
    } while (var_r4 < 0x42);
    return 1;
}
