#include "m2c.h"

M2C_UNK func_02001ef0(s32);                         /* extern */
M2C_UNK func_020020c8(s32);                         /* extern */

void func_020c9ac4(s32 arg0, s32 arg1) {
    s32 var_r2;
    s32 var_r4;

    var_r2 = 0;
    var_r4 = 0;
    if (arg0 != 0x10) {
        if (arg0 & 1) {
            var_r2 |= 1;
        }
        if (arg0 & 2) {
            var_r2 |= 2;
        }
        if (arg0 & 4) {
            var_r2 |= 4;
        }
        if (arg0 & 8) {
            var_r2 |= 8;
        }
        func_02001ef0(var_r2);
    }
    if (arg1 == 8) {
        return;
    }
    if (arg1 & 1) {
        var_r4 |= 0x10;
    }
    if (arg1 & 2) {
        var_r4 |= 0x20;
    }
    if (arg1 & 4) {
        var_r4 |= 0x40;
    }
    func_020020c8(var_r4);
}
