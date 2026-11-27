#include "m2c.h"

M2C_UNK func_0200190c(s32, M2C_UNK);                /* extern */
s32 func_0200191c(s32);                             /* extern */
M2C_UNK func_02001c04(s32, s32);                    /* extern */

void func_02001c68(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 var_r5;

    temp_r4 = arg1 * 0x14;
    var_r5  = 1;
    if (func_0200191c(arg0 + temp_r4) != 0) {
        var_r5 = 0;
    }
    func_0200190c(arg0 + temp_r4, arg2);
    if ((func_0200191c(arg0 + temp_r4) != 0) && (var_r5 != 0)) {
        func_02001c04(arg0, arg1);
    }
}
