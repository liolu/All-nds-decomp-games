#include "m2c.h"

M2C_UNK func_0201ee5c(void *, s32, s32);            /* extern */

void func_0201ee68(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_r1;

    var_r1  = arg1;
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x20);
    if (var_r1 > temp_r2) {
        var_r1 = temp_r2;
    }
    func_0201ee5c(arg0, var_r1 << 8, var_r1 * 0xC0);
}
