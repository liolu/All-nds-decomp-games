#include "m2c.h"

M2C_UNK func_0202120c(M2C_UNK, void *, M2C_UNK);    /* extern */

void func_02082cf0(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_r3;
    void *temp_r0;

    var_r3 = 0;
    do {
        temp_r2                         = var_r3 + 1;
        temp_r0                         = arg0 + (var_r3 * 4);
        var_r3                          = temp_r2;
        M2C_FIELD(temp_r0, s32 *, 0xC0) = temp_r2;
    } while (temp_r2 < 0x10);
    M2C_FIELD(arg0, s32 *, 0x10C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    func_0202120c(0, arg0, 0xC0);
}
