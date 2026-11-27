#include "m2c.h"

M2C_UNK func_0200d2f8(s32);                         /* extern */
M2C_UNK func_0202d858(void *);                      /* extern */
M2C_UNK func_02036a28(s32);                         /* extern */
M2C_UNK func_0203a9bc(s32);                         /* extern */
M2C_UNK func_02041328(s32);                         /* extern */
M2C_UNK func_02091394(void *);                      /* extern */
M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_0209667c(s32);                         /* extern */
M2C_UNK func_020cfb60(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_02033750;

void *func_02033fe4(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;

    func_02036a28(arg0 + 0xAC);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0xA8);
    if (temp_r5 != 0) {
        func_0200d2f8(temp_r5 + 0x84);
        func_020cfb60(temp_r5 + 8, 0x1F, 4, &func_02033750);
        func_020934a8(temp_r5);
    }
    temp_r5_2 = M2C_FIELD(arg0, s32 *, 0xA4);
    if (temp_r5_2 != 0) {
        func_0209667c(temp_r5_2);
        func_020934a8(temp_r5_2);
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x94);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x90);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x8C);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
    }
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0x88);
    if (temp_r0_4 != NULL) {
        M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 4)(temp_r0_4);
    }
    temp_r5_3 = M2C_FIELD(arg0, s32 *, 0x84);
    if (temp_r5_3 != 0) {
        func_0203a9bc(temp_r5_3);
        func_020934a8(temp_r5_3);
    }
    temp_r5_4 = M2C_FIELD(arg0, s32 *, 0x80);
    if (temp_r5_4 != 0) {
        func_02041328(temp_r5_4);
        func_020934a8(temp_r5_4);
    }
    func_0202d858(arg0 + 0x6C);
    func_02091394(arg0 + 0x44);
    func_02091394(arg0 + 0x1C);
    return arg0;
}
