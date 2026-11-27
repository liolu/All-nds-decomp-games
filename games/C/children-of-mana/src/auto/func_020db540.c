/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_02010220();                            /* extern */
M2C_UNK func_0203e45c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0207b218(s32);                         /* extern */
M2C_UNK func_020db1a8();                            /* extern */

void func_020db540(void *arg0) {
    s32 temp_r5;
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;

    func_020db1a8();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x20);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x20) = NULL;
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x14);
    if (temp_r0_2 != NULL) {
        if (temp_r0_2 != NULL) {
            M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 0xC)(temp_r0_2);
        }
        M2C_FIELD(arg0, void ***, 0x14) = NULL;
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x18);
    if (temp_r0_3 != NULL) {
        if (temp_r0_3 != NULL) {
            M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 0xC)(temp_r0_3);
        }
        M2C_FIELD(arg0, void ***, 0x18) = NULL;
    }
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0x20);
    if (temp_r0_4 != NULL) {
        if (temp_r0_4 != NULL) {
            M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 4)(temp_r0_4);
        }
        M2C_FIELD(arg0, void ***, 0x20) = NULL;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x48);
    if (temp_r5 != 0) {
        if (temp_r5 != 0) {
            func_0207b218(temp_r5);
            func_0200f2c4(temp_r5);
        }
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
    }
    func_02010220();
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x1F00) | 0x1100;
    func_0203e45c(5, 0, 0);
}
