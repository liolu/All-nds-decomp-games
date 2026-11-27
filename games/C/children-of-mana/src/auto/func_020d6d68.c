/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270();                /* extern */
s32 func_0204ad68();                                /* extern */
s32 func_020cbfac();                                /* extern */
s32 func_020d43b8();                                /* extern */
s32 func_020db8c8();                                /* extern */
s32 func_020e7830();                                /* extern */
s32 func_020e9494();                                /* extern */
s32 func_020eb29c();                                /* extern */

void *func_020d6d68(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;

    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    var_r0                       = func_0200f270(0x178);
    if (var_r0 != 0) {
        var_r0 = func_0204ad68();
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0;
    var_r0_2                  = func_0200f270(0x4C, 0);
    if (var_r0_2 != 0) {
        var_r0_2 = func_020d43b8();
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_r0_2;
    var_r0_3                    = func_0200f270(0x18, 0);
    if (var_r0_3 != 0) {
        var_r0_3 = func_020cbfac();
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r0_3;
    var_r0_4                     = func_0200f270(0x50, 0);
    if (var_r0_4 != 0) {
        var_r0_4 = func_020db8c8();
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_r0_4;
    var_r0_5                     = func_0200f270(0x20, 0);
    if (var_r0_5 != 0) {
        var_r0_5 = func_020e7830();
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r0_5;
    var_r0_6                     = func_0200f270(0x44, 0);
    if (var_r0_6 != 0) {
        var_r0_6 = func_020e9494();
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r0_6;
    var_r0_7                     = func_0200f270(0x34, 0);
    if (var_r0_7 != 0) {
        var_r0_7 = func_020eb29c();
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_r0_7;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    return arg0;
}
