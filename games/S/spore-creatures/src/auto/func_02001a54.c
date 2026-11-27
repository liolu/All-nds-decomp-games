#include "m2c.h"

M2C_UNK func_020017c8(s32, s32);                    /* extern */

void func_02001a54(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg0;
    var_r4 = 0;
    do {
        func_020017c8(var_r5, var_r4);
        var_r4 += 1;
        var_r5 += 0x14;
    } while (var_r4 < 0x42);
}
