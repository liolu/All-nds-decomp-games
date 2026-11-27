#include "m2c.h"

M2C_UNK func_0203ec18(void *);                      /* extern */
M2C_UNK func_02093234(void *, s32, M2C_UNK, M2C_UNK); /* extern */

void func_0203eb7c(void *arg0) {
    s32 var_r0;
    s32 var_r4;
    void *var_r2;
    void *var_r5;

    var_r4                      = 0;
    var_r5                      = arg0;
    M2C_FIELD(arg0, s8 *, 0xCD) = 0;
    do {
        func_0203ec18(var_r5);
        var_r4 += 1;
        var_r5 += 0xC;
    } while (var_r4 < 0xC);
    var_r0 = 0;
    var_r2 = arg0;
    do {
        M2C_FIELD(var_r2, s8 *, 0x90) = 0;
        M2C_FIELD(var_r2, s8 *, 0x91) = 0;
        var_r0 += 1;
        M2C_FIELD(var_r2, s8 *, 0x92) = 0;
        var_r2 += 3;
    } while (var_r0 < 5);
    M2C_FIELD(arg0, s8 *, 0xCC)  = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    M2C_FIELD(arg0, s32 *, 0xE0) = 0;
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    M2C_FIELD(arg0, s8 *, 0xCE)  = 0;
    M2C_FIELD(arg0, s8 *, 0xCF)  = 0;
    func_02093234(arg0 + 0xA4, 0, 0x14, 8);
    func_02093234(arg0 + 0xB8, 0, 0x14, 8);
}
