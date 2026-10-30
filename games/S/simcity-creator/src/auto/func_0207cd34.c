#include "m2c.h"

s32 func_020197c4();                                /* extern */
s32 func_0201a018(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0207cc74(s32, M2C_UNK, M2C_UNK, s32);  /* extern */

u8 func_0207cd34(s32 arg0) {
    s32 var_r0;

    func_0207cc74(arg0, 1, 0x59, arg0 + 0x20);
    var_r0 = func_0201a018(func_020197c4() * 0x64, 0x96);
    if (var_r0 > 0x64) {
        var_r0 = 0x64;
    }
    return (u8) var_r0;
}
