#include "m2c.h"

M2C_UNK func_0204876c();                            /* extern */

void func_020486f0(void *arg0, s32 arg1) {
    s32 var_r1;
    s32 var_r2;

    var_r1 = arg1;
    if (var_r1 > 0) {
        var_r2 = var_r1;
    } else {
        var_r2 = 0;
    }
    if (var_r2 < 0x7F) {
        if (var_r1 <= 0) {
            var_r1 = 0;
        }
    } else {
        var_r1 = 0x7F;
    }
    M2C_FIELD(arg0, s32 *, 0x3CC) = var_r1;
    func_0204876c();
}
