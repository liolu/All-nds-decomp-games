#include "m2c.h"

s32 func_020348ec(s32);                             /* extern */
s32 func_0207f258();                                /* extern */
M2C_UNK func_0207f2bc(s32, s32);                    /* extern */
s32 func_02080f5c();                                /* extern */
M2C_UNK func_02080f70(s32, s32);                    /* extern */
s32 func_02086eb8();                                /* extern */
M2C_UNK func_02086ff8(s32, s32);                    /* extern */
s32 func_02089d54();                                /* extern */
M2C_UNK func_02089d8c(s32, s32);                    /* extern */
s32 func_0208aa74();                                /* extern */
M2C_UNK func_0208aa9c(s32, s32);                    /* extern */
extern M2C_UNK data_020dda3c;

void func_02081f34(void *arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;

    M2C_FIELD(arg0, s32 *, 4) = arg1;
    var_r0                    = func_020348ec(0x68F4);
    if (var_r0 != 0) {
        var_r0 = func_02086eb8();
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_r0;
    func_02086ff8(var_r0, M2C_FIELD(arg0, s32 *, 4));
    var_r0_2 = func_020348ec(0x60F4);
    if (var_r0_2 != 0) {
        var_r0_2 = func_0208aa74();
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0_2;
    func_0208aa9c(var_r0_2, M2C_FIELD(arg0, s32 *, 4));
    var_r0_3 = func_020348ec(0x4060);
    if (var_r0_3 != 0) {
        var_r0_3 = func_02089d54();
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_r0_3;
    func_02089d8c(var_r0_3, M2C_FIELD(arg0, s32 *, 4));
    var_r0_4 = func_020348ec(0x79A0);
    if (var_r0_4 != 0) {
        var_r0_4 = func_0207f258();
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r0_4;
    func_0207f2bc(var_r0_4, M2C_FIELD(arg0, s32 *, 4));
    var_r0_5 = func_020348ec(8);
    if (var_r0_5 != 0) {
        var_r0_5 = func_02080f5c();
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r0_5;
    func_02080f70(var_r0_5, M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(&data_020dda3c, s32 *, 8) = 0;
}
