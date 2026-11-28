#include "m2c.h"

M2C_UNK func_020a33d0();                            /* extern */
extern void *data_020fc258;

void func_020a3288(void *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_4;
    s32 temp_r3;
    s32 var_r1;
    void *temp_r1_3;

    if (M2C_FIELD(arg0, u8 *, 0x300) != 0) {
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x2EC);
        if ((temp_r1 != 1) && (temp_r1 != 3)) {
            func_020a33d0(arg0);
            return;
        }
    }
    temp_r1_2 = M2C_FIELD(arg0, s32 *, 0x2EC);
    switch (temp_r1_2) {                            /* irregular */
        case 2:
            temp_r1_3 = M2C_FIELD(arg0, void **, 0x2F8);
            if (temp_r1_3 != NULL) {
                if (((u32) (M2C_FIELD(temp_r1_3, u8 *, 0x14C) << 0x1A) >> 0x1F) != 0) {
                    var_r1 = 1;
                } else {
                    var_r1 = 0;
                }
                if (var_r1 != 0) {
                    return;
                }
                goto block_15;
            }
        block_15:
            M2C_FIELD(data_020fc258, s8 *, 0x2E4) = 1;
            temp_r3                               = M2C_FIELD(arg0, s32 *, 0x2F0) - 0x2000;
            M2C_FIELD(arg0, s32 *, 0x2F0)         = temp_r3;
            if (temp_r3 <= -0x10000) {
                M2C_FIELD(arg0, s32 *, 0x2F0)         = -0x10000;
                M2C_FIELD(arg0, s32 *, 0x2EC)         = 3;
                M2C_FIELD(data_020fc258, s8 *, 0x2E4) = 0;
            } else if (temp_r3 >= 0x10000) {
                M2C_FIELD(arg0, s32 *, 0x2F0)         = 0x10000;
                M2C_FIELD(arg0, s32 *, 0x2EC)         = 3;
                M2C_FIELD(data_020fc258, s8 *, 0x2E4) = 0;
            }
            func_020a33d0(arg0);
            return;
        case 4:
            M2C_FIELD(data_020fc258, s8 *, 0x2E4) = 1;
            M2C_FIELD(data_020fc258, s8 *, 0x2E5) = 1;
            temp_r1_4                             = M2C_FIELD(arg0, s32 *, 0x2F4);
            if (temp_r1_4 != 0) {
                M2C_FIELD(arg0, s32 *, 0x2F4) = (s32) (temp_r1_4 - 1);
            } else {
                M2C_FIELD(arg0, s32 *, 0x2F0) = (s32) (M2C_FIELD(arg0, s32 *, 0x2F0) + 0x2000);
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0x2F0) >= 0) {
                M2C_FIELD(arg0, s32 *, 0x2F0)         = 0;
                M2C_FIELD(arg0, s32 *, 0x2EC)         = 1;
                M2C_FIELD(data_020fc258, s8 *, 0x2E4) = 0;
                M2C_FIELD(data_020fc258, s8 *, 0x2E5) = 0;
            }
            func_020a33d0(arg0);
            return;
    }
}
