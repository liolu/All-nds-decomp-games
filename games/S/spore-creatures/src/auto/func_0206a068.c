#include "m2c.h"

M2C_UNK func_0206a0e4(s32);                         /* extern */

void func_0206a068(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg0;
    var_r4 = 0;
    do {
        func_0206a0e4(var_r5);
        var_r4 += 1;
        var_r5 += 0x2C;
    } while (var_r4 < 0x10);
}
