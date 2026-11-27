#include "m2c.h"

M2C_UNK func_02019a14(s32 *, u32, s32);             /* extern */

s32 *func_020199c0(s32 *arg0) {
    u32 var_r5;

    *arg0  = 0xB229E3A1;
    var_r5 = 0;
    do {
        func_02019a14(arg0, var_r5, 0xA2574A99);
        var_r5 += 1;
    } while (var_r5 < 4U);
    return arg0;
}
