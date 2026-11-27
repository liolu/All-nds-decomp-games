#include "m2c.h"

M2C_UNK ACSSBADX_DestroyAdxt();                     /* extern */
M2C_UNK func_02026e14(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0207d4cc(s32);                         /* extern */
M2C_UNK func_020c16ac(s32);                         /* extern */
M2C_UNK func_020c184c(s32);                         /* extern */
M2C_UNK func_020c18d4(s32);                         /* extern */
M2C_UNK func_ov000_02188970(s32);                   /* extern */
extern M2C_UNK func_020be0ec;

void func_020be81c(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;
    void **temp_r0_5;

    ACSSBADX_DestroyAdxt();
    temp_r0 = M2C_FIELD(arg0, void ***, 0xC);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x20)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0xC) = NULL;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r5 != 0) {
        if (temp_r5 != 0) {
            func_020c18d4(temp_r5);
            func_020c16ac(temp_r5 + 0x1C);
            func_020c184c(temp_r5 + 0x10);
            func_020c184c(temp_r5 + 4);
            func_0207d4cc(temp_r5);
        }
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x14);
    if (temp_r0_2 != NULL) {
        if (temp_r0_2 != NULL) {
            M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 0x28)(temp_r0_2);
        }
        M2C_FIELD(arg0, void ***, 0x14) = NULL;
    }
    temp_r5_2 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_r5_2 != 0) {
        if (temp_r5_2 != 0) {
            func_ov000_02188970(temp_r5_2);
            func_02026e14(temp_r5_2 + 4, 3, 0x2A8, &func_020be0ec);
            func_0207d4cc(temp_r5_2);
        }
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x1C);
    if (temp_r0_3 != NULL) {
        if (temp_r0_3 != NULL) {
            M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
        }
        M2C_FIELD(arg0, void ***, 0x1C) = NULL;
    }
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0x20);
    if (temp_r0_4 != NULL) {
        if (temp_r0_4 != NULL) {
            M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 4)(temp_r0_4);
        }
        M2C_FIELD(arg0, void ***, 0x20) = NULL;
    }
    temp_r0_5 = M2C_FIELD(arg0, void ***, 0x70);
    if (temp_r0_5 == NULL) {
        return;
    }
    if (temp_r0_5 != NULL) {
        M2C_FIELD(*temp_r0_5, M2C_UNK(**)(), 4)(temp_r0_5);
    }
    M2C_FIELD(arg0, void ***, 0x70) = NULL;
}
