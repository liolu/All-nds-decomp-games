#include "m2c.h"

s32 func_02087820(void *, u16, u16);                /* extern */

void func_02087acc(void *arg0) {
    u16 var_r5;
    u16 var_r6;
    u16 var_r7;
    u16 var_r8;
    u16 var_r9;

    var_r5                      = 0;
    var_r6                      = 0x7F;
    var_r7                      = 0;
    var_r8                      = 0x7F;
    var_r9                      = 0;
    M2C_FIELD(arg0, u8 *, 0xA4) = 0U;
    do {
        if (func_02087820(arg0, var_r5, 0U) != 0) {
            M2C_FIELD(arg0, u8 *, 0xA4) = (u8) (M2C_FIELD(arg0, u8 *, 0xA4) | 1);
            if (var_r9 == 0) {
                M2C_FIELD(arg0, u8 *, 0xA4) = (u8) (M2C_FIELD(arg0, u8 *, 0xA4) | 8);
            }
        }
        if (func_02087820(arg0, var_r6, 0x7FU) != 0) {
            M2C_FIELD(arg0, u8 *, 0xA4) = (u8) (M2C_FIELD(arg0, u8 *, 0xA4) | 4);
            if (var_r9 == 0) {
                M2C_FIELD(arg0, u8 *, 0xA4) = (u8) (M2C_FIELD(arg0, u8 *, 0xA4) | 2);
            }
        }
        if (func_02087820(arg0, 0U, var_r8) != 0) {
            M2C_FIELD(arg0, u8 *, 0xA4) = (u8) (M2C_FIELD(arg0, u8 *, 0xA4) | 8);
            if (var_r9 == 0) {
                M2C_FIELD(arg0, u8 *, 0xA4) = (u8) (M2C_FIELD(arg0, u8 *, 0xA4) | 4);
            }
        }
        if (func_02087820(arg0, 0x7FU, var_r7) != 0) {
            M2C_FIELD(arg0, u8 *, 0xA4) = (u8) (M2C_FIELD(arg0, u8 *, 0xA4) | 2);
            if (var_r9 == 0) {
                M2C_FIELD(arg0, u8 *, 0xA4) = (u8) (M2C_FIELD(arg0, u8 *, 0xA4) | 1);
            }
        }
        var_r5 += 1;
        var_r6 -= 1;
        var_r7 += 1;
        var_r9 += 1;
        var_r8 -= 1;
    } while ((u32) var_r9 < 0x7FU);
}
