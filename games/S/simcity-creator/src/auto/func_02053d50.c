#include "m2c.h"

s32 func_020348ec(s32);                             /* extern */
M2C_UNK func_020549b8(s32);                         /* extern */
M2C_UNK func_02054ac4(void *);                      /* extern */
s32 func_02054c5c();                                /* extern */
M2C_UNK func_02054c9c(s32, s32, s32, s32);          /* extern */
s32 func_02055e48();                                /* extern */
M2C_UNK func_02055f8c(s32, s32);                    /* extern */
s32 func_02056850();                                /* extern */
M2C_UNK func_020568a8(s32, s32, s32, s32);          /* extern */
s32 func_0205760c();                                /* extern */
M2C_UNK func_02057614(s32, s32, s32, s32, s32);     /* extern */
s32 func_0206bbe0(s32);                             /* extern */
s32 func_0206bbf0(s32);                             /* extern */
s32 func_020ad9ec();                                /* extern */
M2C_UNK func_020ada54(s32, s32, s32);               /* extern */

void func_02053d50(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;

    M2C_FIELD(arg0, s32 *, 8)    = func_0206bbe0(arg2);
    M2C_FIELD(arg0, s32 *, 0xC)  = func_0206bbf0(arg2);
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 4)    = arg2;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    var_r0                       = func_020348ec(0x58);
    if (var_r0 != 0) {
        var_r0 = func_02055e48();
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_r0;
    func_02055f8c(var_r0, M2C_FIELD(arg0, s32 *, 0));
    var_r0_2 = func_020348ec(0x120);
    if (var_r0_2 != 0) {
        var_r0_2 = func_0205760c();
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r0_2;
    func_02057614(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4),
                  M2C_FIELD(arg0, s32 *, 0x20), 0);
    var_r0_3 = func_020348ec(0x402C);
    if (var_r0_3 != 0) {
        var_r0_3 = func_02054c5c();
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0_3;
    func_02054c9c(var_r0_3, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0x20));
    var_r0_4 = func_020348ec(0x120);
    if (var_r0_4 != 0) {
        var_r0_4 = func_0205760c();
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_r0_4;
    func_02057614(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4),
                  M2C_FIELD(arg0, s32 *, 0x20), 1);
    var_r0_5 = func_020348ec(0x2C);
    if (var_r0_5 != 0) {
        var_r0_5 = func_02056850();
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r0_5;
    func_020568a8(var_r0_5, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0x20));
    var_r0_6 = func_020348ec(0x120);
    if (var_r0_6 != 0) {
        var_r0_6 = func_0205760c();
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r0_6;
    func_02057614(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4),
                  M2C_FIELD(arg0, s32 *, 0x20), 3);
    var_r0_7 = func_020348ec(0xA0);
    if (var_r0_7 != 0) {
        var_r0_7 = func_020ad9ec();
    }
    M2C_FIELD(arg0, s32 *, 0x28) = var_r0_7;
    func_020ada54(var_r0_7, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0xA4) = arg3;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    func_020549b8(arg1);
    func_02054ac4(arg0);
    M2C_FIELD(arg0, s32 *, 0x2C)  = 0;
    M2C_FIELD(arg0, s32 *, 0xAC)  = 0;
    M2C_FIELD(arg0, s32 *, 0xB0)  = 0;
    M2C_FIELD(arg0, s32 *, 0x8B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x8B8) = 0;
    M2C_FIELD(arg0, s8 *, 0x8BC)  = 0;
}
