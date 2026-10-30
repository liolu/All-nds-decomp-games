#include "m2c.h"

s32 func_020230d0();                                /* extern */
s32 func_020348ec(s32);                             /* extern */
M2C_UNK func_02099358(void *, M2C_UNK);             /* extern */
s32 func_020993c8();                                /* extern */
M2C_UNK func_020993f0();                            /* extern */
M2C_UNK func_0209cf4c(s32);                         /* extern */

void func_02098e70(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;

    M2C_FIELD(arg0, s16 *, 0xC)  = 1;
    M2C_FIELD(arg0, s16 *, 0xE)  = 1;
    M2C_FIELD(arg0, s16 *, 0x10) = -0x40;
    M2C_FIELD(arg0, s16 *, 0x12) = -0x40;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s8 *, 0x1C)  = 0;
    M2C_FIELD(arg0, s8 *, 0x1D)  = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
    M2C_FIELD(arg0, s16 *, 0x26) = 0;
    M2C_FIELD(arg0, s16 *, 0x28) = 0;
    M2C_FIELD(arg0, s16 *, 0x2A) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s8 *, 0xD9)  = 0;
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    var_r0                       = func_020348ec(0x10060);
    if (var_r0 != 0) {
        var_r0 = func_020993c8();
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r0;
    func_020993f0();
    func_0209cf4c(M2C_FIELD(arg0, s32 *, 4));
    var_r0_2 = func_020348ec(0x58);
    if (var_r0_2 != 0) {
        var_r0_2 = func_020230d0();
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0_2;
    func_02099358(arg0, 0);
}
