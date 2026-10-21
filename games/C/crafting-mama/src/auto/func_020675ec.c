#include "m2c.h"

void *func_02029490();                              /* extern */
M2C_UNK func_02060e38();                            /* extern */

void func_020675ec(void) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r2_4;
    s32 temp_r2_5;
    s32 var_r1;
    s32 var_r1_2;
    void *temp_r0;
    void *temp_r2;

    func_02060e38();
    temp_r0 = func_02029490();
    temp_r2 = M2C_FIELD(temp_r0, void **, 0x50);
    if (temp_r2 == NULL) {
        return;
    }
    temp_r1 = M2C_FIELD(temp_r0, s32 *, 0x20);
    switch (temp_r1) {                              /* irregular */
        case 0x63:
            M2C_FIELD(temp_r0, s32 *, 0x10) = 1;
            return;
        case 0x0:
            temp_r1_2                       = M2C_FIELD(temp_r0, s32 *, 0x1C) + 1;
            M2C_FIELD(temp_r0, s32 *, 0x1C) = temp_r1_2;
            if (temp_r1_2 < 0) {
                return;
            }
            M2C_FIELD(temp_r0, s32 *, 0x44) = (s32) M2C_FIELD(M2C_FIELD(temp_r0, void **, 0x50), u16 *, 0x12);
            M2C_FIELD(temp_r0, s32 *, 0x1C) = 0;
            M2C_FIELD(temp_r0, s32 *, 0x20) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x20) + 1);
            return;
        case 0x1:
            temp_r2_2 = M2C_FIELD(temp_r0, s32 *, 0x44);
            temp_r1_3 = M2C_FIELD(temp_r0, s32 *, 0x38);
            if (M2C_FIELD(temp_r0, s32 *, 0x3C) != 0) {
                temp_r2_3                       = temp_r2_2 - temp_r1_3;
                M2C_FIELD(temp_r0, s32 *, 0x44) = temp_r2_3;
                if ((s32) M2C_FIELD(temp_r0, s32 *, 0x30) > temp_r2_3) {
                    if (M2C_FIELD(temp_r0, s32 *, 0x3C) == 0) {
                        var_r1 = 1;
                    } else {
                        var_r1 = 0;
                    }
                    M2C_FIELD(temp_r0, s32 *, 0x3C) = var_r1;
                    M2C_FIELD(temp_r0, s32 *, 0x40) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x40) + 1);
                }
            } else {
                temp_r2_4                       = temp_r2_2 + temp_r1_3;
                M2C_FIELD(temp_r0, s32 *, 0x44) = temp_r2_4;
                if ((s32) M2C_FIELD(temp_r0, s32 *, 0x34) < temp_r2_4) {
                    if (M2C_FIELD(temp_r0, s32 *, 0x3C) == 0) {
                        var_r1_2 = 1;
                    } else {
                        var_r1_2 = 0;
                    }
                    M2C_FIELD(temp_r0, s32 *, 0x3C) = var_r1_2;
                }
            }
            M2C_FIELD(M2C_FIELD(temp_r0, void **, 0x50), u16 *, 0x12) = (u16) M2C_FIELD(temp_r0, s32 *, 0x44);
            M2C_FIELD(M2C_FIELD(temp_r0, void **, 0x50), s16 *, 0x10) = (s16) M2C_FIELD(temp_r0, s32 *, 0x44);
            temp_r2_5                                                 = M2C_FIELD(temp_r0, s32 *, 0x24);
            if ((temp_r2_5 != 0) && (temp_r2_5 <= (s32) M2C_FIELD(temp_r0, s32 *, 0x40))) {
                M2C_FIELD(temp_r0, s32 *, 0x20) = 0x63;
            }
            if (*M2C_FIELD(temp_r0, s32 **, 0x4C) != 0) {
                M2C_FIELD(temp_r0, s32 *, 0x20) = 0x5A;
            }
            return;
        case 0x5A:
            M2C_FIELD(temp_r2, u16 *, 0x12)                           = 0x1000U;
            M2C_FIELD(M2C_FIELD(temp_r0, void **, 0x50), s16 *, 0x10) = 0x1000;
            M2C_FIELD(temp_r0, s32 *, 0x20)                           = 0x63;
            return;
    }
}
