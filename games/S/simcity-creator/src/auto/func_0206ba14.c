#include "m2c.h"

M2C_UNK func_02014050(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_0201c4ac(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_020348ec(s32);                             /* extern */
s32 func_02061c28();                                /* extern */
M2C_UNK func_02061f2c(s32, void *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_02069318();                                /* extern */
M2C_UNK func_0206932c(s32, s32, s32);               /* extern */
M2C_UNK func_0206be88(void *);                      /* extern */
M2C_UNK func_020b132c();                            /* extern */
s32 func_020b137c();                                /* extern */
s32 func_020b17bc(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_020b2648();                                /* extern */
M2C_UNK func_020b2660();                            /* extern */
s32 func_020b3ce4();                                /* extern */
M2C_UNK func_020b3d04();                            /* extern */
extern M2C_UNK data_020cd944;
extern M2C_UNK data_020cd960;

void func_0206ba14(void *arg0) {
    u8 sp4[256];
    s32 temp_r0;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;

    func_0201c4ac(sp4, 0x100);
    var_r0 = func_020348ec(0xBFA0);
    if (var_r0 != 0) {
        var_r0 = func_020b2648();
    }
    M2C_FIELD(arg0, s32 *, 0) = var_r0;
    func_020b2660();
    var_r0_2 = func_020348ec(8);
    if (var_r0_2 != 0) {
        var_r0_2 = func_020b17bc(var_r0_2, 0, 0, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r0_2;
    var_r0_3                  = func_020348ec(0xC);
    if (var_r0_3 != 0) {
        var_r0_3 = func_02061c28();
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_r0_3;
    var_r0_4                    = func_020348ec(0x24);
    if (var_r0_4 != 0) {
        var_r0_4 = func_02069318();
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_r0_4;
    func_0206932c(var_r0_4, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC));
    var_r0_5 = func_020348ec(0x90);
    if (var_r0_5 != 0) {
        var_r0_5 = func_020b3ce4();
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_r0_5;
    func_020b3d04();
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    func_020b132c();
    temp_r0 = func_020b137c();
    func_02014050(sp4, &data_020cd944, temp_r0);
    func_02061f2c(M2C_FIELD(arg0, s32 *, 0xC), arg0 + 0x24, sp4, 0x130);
    func_02014050(sp4, &data_020cd960, temp_r0);
    func_02061f2c(M2C_FIELD(arg0, s32 *, 0xC), arg0 + 0x154, sp4, 0x5D0);
    func_0206be88(arg0);
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0;
}
