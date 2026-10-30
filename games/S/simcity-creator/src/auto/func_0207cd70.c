#include "m2c.h"

s32 func_020197c4();                                /* extern */
s32 func_0201a018(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0207cc74(s32, M2C_UNK, M2C_UNK, s32);  /* extern */
M2C_UNK func_020b1514();                            /* extern */

u8 func_0207cd70(s32 arg0) {
    s32 temp_r4;
    s32 var_r0;

    func_0207cc74(arg0, 0, 0x59, arg0 + 0x458);
    temp_r4 = func_020197c4();
    func_020b1514();
    var_r0 = func_0201a018(temp_r4 * 0x64, 0x59);
    if (var_r0 > 0x64) {
        var_r0 = 0x64;
    }
    return (u8) var_r0;
}
