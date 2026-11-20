#include "m2c.h"

M2C_UNK func_020b406c(s32, M2C_UNK *, s16, s16, s32, s32, s32); /* extern */
M2C_UNK func_020b44d4(M2C_UNK *, s8 *, M2C_UNK);    /* extern */
extern M2C_UNK data_02163808;

void func_020b4518(s32 arg0, void *arg1) {
    s32 temp_r4;
    s8 *temp_r1;
    s8 *temp_r1_2;
    s8 *temp_r1_3;
    s8 temp_r0;
    s8 temp_r0_2;
    s8 temp_r0_3;

    temp_r4 = M2C_FIELD(arg1, s32 *, 0x20);
    switch (arg0) {                                 /* irregular */
        case 3:
            temp_r0 = *M2C_FIELD(arg1, s8 **, 0x10);
            if (temp_r0 == 0) {
                return;
            }
            if (temp_r0 == 0x7A) {
                M2C_FIELD(arg1, s32 *, 0x1C) = 0xF;
            } else if (((s32) temp_r0 >= 0x62) && ((s32) temp_r0 <= 0x70)) {
                M2C_FIELD(arg1, s32 *, 0x1C) = (s32) (temp_r0 - 0x61);
            }
            temp_r1 = M2C_FIELD(arg1, s8 **, 0x10);
            if (*temp_r1 != 0xA) {
                M2C_FIELD(arg1, s8 **, 0x10) = (s8 *) (temp_r1 + 1);
            }
            return;
        case 4:
            temp_r0_2 = *M2C_FIELD(arg1, s8 **, 0x10);
            if (temp_r0_2 == 0) {
                return;
            }
            if (temp_r0_2 == 0x7A) {
                M2C_FIELD(arg1, s32 *, 0x1C) = 0xF;
            } else if (((s32) temp_r0_2 >= 0x62) && ((s32) temp_r0_2 <= 0x70)) {
                M2C_FIELD(arg1, s32 *, 0x1C) = (s32) (temp_r0_2 - 0x61);
            }
            temp_r1_2 = M2C_FIELD(arg1, s8 **, 0x10);
            temp_r0_3 = *temp_r1_2;
            if (temp_r0_3 == 0xA) {
                return;
            }
            if (temp_r0_3 == 0x7A) {
                M2C_FIELD(arg1, s8 **, 0x10) = (s8 *) (temp_r1_2 + 1);
                return;
            }
            temp_r1_3                    = temp_r1_2 + 1;
            M2C_FIELD(arg1, s8 **, 0x10) = temp_r1_3;
            func_020b44d4(&data_02163808, temp_r1_3, 3);
            func_020b406c(temp_r4, &data_02163808, (s16) M2C_FIELD(arg1, s32 *, 0x14), (s16) M2C_FIELD(arg1, s32 *, 0x18),
                          (s32) (s16) M2C_FIELD(arg1, s32 *, 0x1C), 0xF, 0x209);
            return;
    }
}
