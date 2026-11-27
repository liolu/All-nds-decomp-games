/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4();                         /* extern */
M2C_UNK func_02028b1c();                         /* extern */
M2C_UNK func_02077390();                            /* extern */
M2C_UNK func_020774c8();                         /* extern */
M2C_UNK func_0207b218();                         /* extern */
M2C_UNK func_020bb480();                         /* extern */

void func_020ef710(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;

    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        func_0200f2c4();
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
        func_0200f2c4();
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
        func_0200f2c4();
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x44);
    if (temp_r5 != 0) {
        if (temp_r5 != 0) {
            func_020bb480(temp_r5);
            func_0200f2c4(temp_r5);
        }
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        func_02077390();
        func_020774c8(M2C_FIELD(arg0, s32 *, 0x1C));
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x38)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 4) = NULL;
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 8);
    if (temp_r0_2 != NULL) {
        if (temp_r0_2 != NULL) {
            M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 0xC)(temp_r0_2);
        }
        M2C_FIELD(arg0, void ***, 8) = NULL;
    }
    temp_r5_2 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r5_2 != 0) {
        if (temp_r5_2 != 0) {
            func_0207b218(temp_r5_2);
            func_0200f2c4(temp_r5_2);
        }
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x10);
    if (temp_r0_3 != NULL) {
        if (temp_r0_3 != NULL) {
            M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
        }
        M2C_FIELD(arg0, void ***, 0x10) = NULL;
    }
    temp_r5_3 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r5_3 != 0) {
        if (temp_r5_3 != 0) {
            func_02028b1c(temp_r5_3);
            func_0200f2c4(temp_r5_3);
        }
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0x18);
    if (temp_r0_4 != NULL) {
        if (temp_r0_4 != NULL) {
            M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 0x38)(temp_r0_4);
        }
        M2C_FIELD(arg0, void ***, 0x18) = NULL;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        func_0200f2c4();
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        func_0200f2c4();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
    }
    temp_r5_4 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_r5_4 != 0) {
        if (temp_r5_4 != 0) {
            func_0207b218(temp_r5_4);
            func_0200f2c4(temp_r5_4);
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    func_0200f2c4();
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
