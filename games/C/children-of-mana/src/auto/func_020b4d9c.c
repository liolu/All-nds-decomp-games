/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_0200f0b0();                         /* extern */
s32 func_0200f270();                    /* extern */
M2C_UNK func_020114e4();                            /* extern */
s32 func_02013d0c();                                /* extern */
s32 func_0201838c();                     /* extern */
s32 func_0202f33c();                     /* extern */
M2C_UNK func_02032c1c();                            /* extern */
s32 func_0203315c();                                /* extern */
M2C_UNK func_0205c6f0();                            /* extern */
s32 func_020890d4();            /* extern */
M2C_UNK func_02096758();                            /* extern */
s32 func_02097bb4();                                /* extern */
s32 func_020abf58();                                /* extern */
M2C_UNK func_020c8860();                            /* extern */
M2C_UNK func_020d5cc0();            /* extern */
s32 func_020d6d68();                                /* extern */

void func_020b4d9c(void *arg0) {
    M2C_UNK var_r2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r7;
    s32 var_r8;
    void *temp_r1;
    void *temp_r1_2;

    func_02032c1c();
    var_r0 = func_0200f270(0x130, 0);
    if (var_r0 != 0) {
        var_r0 = func_0201838c(var_r0, arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x28) = var_r0;
    var_r0_2                     = func_0200f270(0x7A4, 0);
    if (var_r0_2 != 0) {
        var_r0_2 = func_0202f33c(var_r0_2, arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_r0_2;
    var_r0_3                     = func_0200f270(0x16E0, 0);
    if (var_r0_3 != 0) {
        var_r0_3 = func_020abf58();
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0_3;
    var_r0_4                     = func_0200f270(0xEC, 0);
    if (var_r0_4 != 0) {
        var_r0_4 = func_0203315c();
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = var_r0_4;
    func_020114e4();
    M2C_FIELD(arg0, s32 *, 0xDC) = func_02013d0c();
    var_r8                       = 0;
    do {
        var_r0_5 = func_0200f270(0x348, 0);
        if (var_r0_5 != 0) {
            var_r0_5 = func_020890d4(var_r0_5, arg0, 0);
        }
        temp_r1 = arg0 + (var_r8 * 4);
        var_r8 += 1;
        M2C_FIELD(temp_r1, s32 *, 0x30) = var_r0_5;
    } while (var_r8 < 4);
    var_r0_6 = func_0200f270(0x70, 0);
    if (var_r0_6 != 0) {
        var_r0_6 = func_020d6d68();
    }
    M2C_FIELD(arg0, s32 *, 0x1D4) = var_r0_6;
    if (M2C_FIELD(arg0, s32 *, 0xD8) == 0) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    func_020d5cc0(M2C_FIELD(arg0, s32 *, 0x1D4), M2C_FIELD(arg0, u8 *, 0xFC), var_r2);
    var_r7 = 0;
    do {
        var_r0_7 = func_0200f270(0x108, 0);
        if (var_r0_7 != 0) {
            var_r0_7 = func_02097bb4();
        }
        temp_r1_2 = arg0 + (var_r7 * 4);
        var_r7 += 1;
        M2C_FIELD(temp_r1_2, s32 *, 0xC0) = var_r0_7;
    } while (var_r7 < 4);
    func_02096758();
    if (M2C_FIELD(arg0, u8 *, 0xFC) != 0) {
        func_0200f0b0(0xD431);
    } else {
        func_0205c6f0();
        func_0200f0b0();
    }
    func_020c8860();
}
