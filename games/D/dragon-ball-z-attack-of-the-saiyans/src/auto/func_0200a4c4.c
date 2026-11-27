#include "m2c.h"

M2C_UNK func_020809f4();                    /* extern */
s32 func_02080a1c();                             /* extern */

s32 func_0200a4c4(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK saved_reg_r4;
    s32 var_r4;
    s32 var_r7;
    u32 temp_r5;

    var_r4 = saved_reg_r4;
    var_r7 = arg1;
    if ((arg0 != 0) && (arg0 != 2)) {

    } else {
        var_r4 = func_02080a1c(0x0400006C);
    }
    temp_r5 = arg0 - 1;
    if (temp_r5 <= 1U) {
        var_r4 = func_02080a1c(0x0400106C);
    }
    if (var_r7 < 0) {
        return var_r4;
    }
    if (arg2 == 0) {
        var_r7 = 0 - var_r7;
    }
    if ((arg0 != 0) && (arg0 != 2)) {

    } else {
        func_020809f4(0x0400006C, var_r7);
    }
    if (temp_r5 <= 1U) {
        func_020809f4(0x0400106C, var_r7);
    }
    return var_r4;
}
