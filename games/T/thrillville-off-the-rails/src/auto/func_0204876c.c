#include "m2c.h"

M2C_UNK func_0204a3c0(s32, s32);                    /* extern */
s32 func_0204af40(s32, M2C_UNK);                    /* extern */

void func_0204876c(s32 arg0) {
    s32 temp_r6;
    s32 var_r0;

    var_r0 = func_0204af40(arg0 + 0x64, 1);
    if (var_r0 == 1) {
        return;
    }
    do {
        temp_r6 = var_r0 * 0x18;
        func_0204a3c0(arg0, arg0 + 0x64 + temp_r6);
        var_r0 = M2C_FIELD((arg0 + temp_r6), s32 *, 0x64);
    } while (var_r0 != 1);
}
