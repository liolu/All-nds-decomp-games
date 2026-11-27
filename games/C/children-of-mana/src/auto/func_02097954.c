/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020384bc(s32);                         /* extern */
M2C_UNK func_020384d0();                            /* extern */

void func_02097954(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;

    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_020384d0();
        func_020384bc(M2C_FIELD(arg0, s32 *, 8));
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0xC);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0xC) = NULL;
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x10);
    if (temp_r0_2 != NULL) {
        if (temp_r0_2 != NULL) {
            M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
        }
        M2C_FIELD(arg0, void ***, 0x10) = NULL;
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x14);
    if (temp_r0_3 != NULL) {
        if (temp_r0_3 != NULL) {
            M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
        }
        M2C_FIELD(arg0, void ***, 0x14) = NULL;
    }
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0x18);
    if (temp_r0_4 != NULL) {
        if (temp_r0_4 != NULL) {
            M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 4)(temp_r0_4);
        }
        M2C_FIELD(arg0, void ***, 0x18) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
}
