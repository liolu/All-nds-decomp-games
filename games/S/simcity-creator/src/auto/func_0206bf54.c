#include "m2c.h"

s32 func_020348ec(M2C_UNK);                         /* extern */
s8 func_0204631c();                                 /* extern */
M2C_UNK func_020537ec(s32);                         /* extern */
s32 func_020a2394(s32, s32, s32);                   /* extern */
s32 func_020ab6e4(s32, s32, s32, s32, s32);         /* extern */
s32 func_020ac4e8(s32, s32);                        /* extern */
s32 func_020ad658(s32, s32, s32, s32, s32);         /* extern */

void func_0206bf54(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;

    M2C_FIELD(arg0, s32 *, 4)    = arg1;
    M2C_FIELD(arg0, s32 *, 8)    = arg3;
    M2C_FIELD(arg0, s32 *, 0xC)  = arg4;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
    var_r0                       = func_020348ec(0x30);
    if (var_r0 != 0) {
        var_r0 = func_020ac4e8(var_r0, arg1);
    }
    M2C_FIELD(arg0, s32 *, 0x34) = var_r0;
    var_r0_2                     = func_020348ec(0x27C);
    if (var_r0_2 != 0) {
        var_r0_2 = func_020ab6e4(var_r0_2, arg1, arg2, arg3, arg4);
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = var_r0_2;
    var_r0_3                     = func_020348ec(0x24);
    if (var_r0_3 != 0) {
        var_r0_3 = func_020ad658(var_r0_3, arg1, arg2, arg3, arg4);
    }
    M2C_FIELD(arg0, s32 *, 0x30) = var_r0_3;
    var_r0_4                     = func_020348ec(0x14);
    if (var_r0_4 != 0) {
        var_r0_4 = func_020a2394(var_r0_4, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0x10));
    }
    M2C_FIELD(arg0, s32 *, 0x44) = var_r0_4;
    func_020537ec(M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(arg0, s8 *, 0x28)  = func_0204631c();
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s8 *, 0x78)  = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 9;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s8 *, 0x80)  = 0;
}
