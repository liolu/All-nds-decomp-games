#include "m2c.h"

s32 func_020348ec(s32);                             /* extern */
M2C_UNK func_0206fffc(s32, void *);                 /* extern */
s32 func_020774b4(s32, s32);                        /* extern */
s32 func_02077a60(s32, s32);                        /* extern */
s32 func_02079ff4(s32, s32);                        /* extern */
s32 func_0207b1f8(s32, s32);                        /* extern */
s32 func_0207b46c(s32, s32);                        /* extern */
s32 func_0207b6e4(s32, s32);                        /* extern */
s32 func_0207d05c(s32, s32);                        /* extern */
s32 func_0207dfc0(s32, s32);                        /* extern */
s32 func_0207ebdc(s32, s32);                        /* extern */
s32 func_0207eeb4(s32, s32);                        /* extern */

void func_02076dac(void *arg0) {
    s32 var_r0;
    s32 var_r0_10;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r0_8;
    s32 var_r0_9;

    func_0206fffc(M2C_FIELD(arg0, s32 *, 8), arg0);
    var_r0 = func_020348ec(0x117C);
    if (var_r0 != 0) {
        var_r0 = func_0207b6e4(var_r0, M2C_FIELD(arg0, s32 *, 8));
    }
    M2C_FIELD(arg0, s32 *, 0xD0) = var_r0;
    var_r0_2                     = func_020348ec(0x14);
    if (var_r0_2 != 0) {
        var_r0_2 = func_0207b1f8(var_r0_2, M2C_FIELD(arg0, s32 *, 8));
    }
    M2C_FIELD(arg0, s32 *, 0xD4) = var_r0_2;
    var_r0_3                     = func_020348ec(0x10);
    if (var_r0_3 != 0) {
        var_r0_3 = func_0207b46c(var_r0_3, M2C_FIELD(arg0, s32 *, 8));
    }
    M2C_FIELD(arg0, s32 *, 0xD8) = var_r0_3;
    var_r0_4                     = func_020348ec(0x24);
    if (var_r0_4 != 0) {
        var_r0_4 = func_0207ebdc(var_r0_4, M2C_FIELD(arg0, s32 *, 8));
    }
    M2C_FIELD(arg0, s32 *, 0xDC) = var_r0_4;
    var_r0_5                     = func_020348ec(0x18);
    if (var_r0_5 != 0) {
        var_r0_5 = func_0207eeb4(var_r0_5, M2C_FIELD(arg0, s32 *, 8));
    }
    M2C_FIELD(arg0, s32 *, 0xE0) = var_r0_5;
    var_r0_6                     = func_020348ec(0x2C);
    if (var_r0_6 != 0) {
        var_r0_6 = func_0207dfc0(var_r0_6, M2C_FIELD(arg0, s32 *, 8));
    }
    M2C_FIELD(arg0, s32 *, 0xBC) = var_r0_6;
    var_r0_7                     = func_020348ec(0x254C);
    if (var_r0_7 != 0) {
        var_r0_7 = func_02077a60(var_r0_7, M2C_FIELD(arg0, s32 *, 8));
    }
    M2C_FIELD(arg0, s32 *, 0xC0) = var_r0_7;
    var_r0_8                     = func_020348ec(0x58);
    if (var_r0_8 != 0) {
        var_r0_8 = func_02079ff4(var_r0_8, M2C_FIELD(arg0, s32 *, 8));
    }
    M2C_FIELD(arg0, s32 *, 0xC4) = var_r0_8;
    var_r0_9                     = func_020348ec(0x1898);
    if (var_r0_9 != 0) {
        var_r0_9 = func_0207d05c(var_r0_9, M2C_FIELD(arg0, s32 *, 8));
    }
    M2C_FIELD(arg0, s32 *, 0xC8) = var_r0_9;
    var_r0_10                    = func_020348ec(0x820);
    if (var_r0_10 != 0) {
        var_r0_10 = func_020774b4(var_r0_10, M2C_FIELD(arg0, s32 *, 8));
    }
    M2C_FIELD(arg0, s32 *, 0xCC) = var_r0_10;
}
