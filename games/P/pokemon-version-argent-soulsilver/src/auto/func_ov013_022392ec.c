#include "m2c.h"

M2C_UNK func_020d47b8(s32, s32, s32);               /* extern */
extern s32 data_ov013_0224f5b0;

void func_ov013_022392ec(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r6;
    s32 var_r5;
    s32 var_r8;

    var_r8 = arg0;
    var_r6 = data_ov013_0224f5b0 + 4 + (arg1 * 2);
    var_r5 = 0;
    if (arg3 <= 0) {
        return;
    }
    do {
        func_020d47b8(var_r8, var_r6, arg2 * 2);
        var_r5 += 1;
        var_r8 += 0x40;
        var_r6 += 0x40;
    } while (var_r5 < arg3);
}
