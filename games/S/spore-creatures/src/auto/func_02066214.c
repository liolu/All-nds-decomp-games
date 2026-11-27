#include "m2c.h"

M2C_UNK func_02084e24();                            /* extern */

void func_02066214(void *arg0, s32 arg1) {
    s32 var_r1;

    var_r1                       = arg1;
    M2C_FIELD(arg0, s32 *, 0x3C) = var_r1;
    if (var_r1 == -1) {
        return;
    }
    if (var_r1 <= 0) {
        var_r1 = 0;
    }
    if (var_r1 > 0x7F) {
        var_r1 = 0x7F;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = var_r1;
    func_02084e24();
}
