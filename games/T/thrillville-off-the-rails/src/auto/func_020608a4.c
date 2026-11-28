#include "m2c.h"

M2C_UNK func_0202120c(M2C_UNK, void *, M2C_UNK);    /* extern */

void func_020608a4(void *arg0, s32 arg1) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r2;
    s32 var_r2_2;
    u8 temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;

    if (M2C_FIELD(arg0, u8 *, 0x12C) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x114);
    if (arg1 != 0) {
        if ((temp_r0 == 0) && (M2C_FIELD(arg0, s32 *, 0x104) != 0)) {
            var_r2 = 0;
            do {
                temp_r1                           = var_r2 + 1;
                temp_r0_2                         = arg0 + (var_r2 * 4);
                var_r2                            = temp_r1;
                M2C_FIELD(temp_r0_2, s32 *, 0xC0) = temp_r1;
            } while (temp_r1 < 0x10);
            M2C_FIELD(arg0, s32 *, 0x100) = 0;
            M2C_FIELD(arg0, s32 *, 0x104) = 0;
            func_0202120c(0, arg0, 0xC0);
        }
        M2C_FIELD(arg0, u8 *, 0x114)  = 1U;
        M2C_FIELD(arg0, s32 *, 0x104) = 0x10;
        return;
    }
    if (temp_r0 != 1) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x104) != 0) {
        var_r2_2 = 0;
        do {
            temp_r1_2                         = var_r2_2 + 1;
            temp_r0_3                         = arg0 + (var_r2_2 * 4);
            var_r2_2                          = temp_r1_2;
            M2C_FIELD(temp_r0_3, s32 *, 0xC0) = temp_r1_2;
        } while (temp_r1_2 < 0x10);
        M2C_FIELD(arg0, s32 *, 0x100) = 0;
        M2C_FIELD(arg0, s32 *, 0x104) = 0;
        func_0202120c(0, arg0, 0xC0);
    }
    M2C_FIELD(arg0, u8 *, 0x114) = 0U;
}
