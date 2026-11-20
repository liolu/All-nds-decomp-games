#include "m2c.h"

u8 func_02019870();                                 /* extern */
M2C_UNK func_020199ac(s32, s32);                    /* extern */

void func_0208786c(void *arg0) {
    s16 var_r1;
    s32 var_r0_2;
    u32 var_r0;

    func_020199ac(0x42700000, M2C_FIELD(arg0, s32 *, 0x9C));
    M2C_FIELD(arg0, u8 *, 0x40) = func_02019870();
    if (M2C_FIELD(arg0, s32 *, 0x68F0) != 0) {
        var_r0 = M2C_FIELD(arg0, u8 *, 0x40) + 0x14;
        if (var_r0 >= 0xFFU) {
            var_r0 = 0xFF;
        }
        M2C_FIELD(arg0, u8 *, 0x40)  = (u8) var_r0;
        M2C_FIELD(arg0, s32 *, 0x8C) = 1;
        var_r0_2                     = 3;
    } else {
        M2C_FIELD(arg0, s32 *, 0x8C) = 5;
        var_r0_2                     = 0xA;
    }
    M2C_FIELD(arg0, s32 *, 0x90) = var_r0_2;
    if (M2C_FIELD(arg0, s32 *, 0x68EC) != 0) {
        var_r1 = 6;
    } else {
        var_r1 = 5;
    }
    M2C_FIELD(arg0, s16 *, 0x50B8) = var_r1;
}
