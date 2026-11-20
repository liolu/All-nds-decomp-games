#include "m2c.h"

s32 func_020230d0();                                /* extern */
s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_02091f48();                                /* extern */

void func_02047664(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;

    M2C_FIELD(arg0, s32 *, 4) = 1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    var_r0                    = func_020348ec(0x58);
    if (var_r0 != 0) {
        var_r0 = func_020230d0();
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = var_r0;
    var_r0_2                     = func_020348ec(0xF00);
    if (var_r0_2 != 0) {
        var_r0_2 = func_02091f48();
    }
    M2C_FIELD(arg0, s32 *, 0x50) = var_r0_2;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
