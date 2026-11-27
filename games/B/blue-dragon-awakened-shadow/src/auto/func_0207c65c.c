#include "m2c.h"

M2C_UNK func_0207bcb8(void *);                      /* extern */
M2C_UNK func_0207bd14(void *);                      /* extern */

void func_0207c65c(void *arg0, s32 arg1) {
    void **temp_r0;
    void **temp_r0_2;

    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) M2C_FIELD(arg0, s32 *, 0x44);
        temp_r0                      = M2C_FIELD(arg0, void ***, 0x3C);
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x20)(temp_r0);
            func_0207bd14(arg0);
        }
        temp_r0_2 = M2C_FIELD(arg0, void ***, 0x38);
        if (temp_r0_2 != NULL) {
            M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 0x20)(temp_r0_2);
            func_0207bcb8(arg0);
        }
        M2C_FIELD(arg0, s32 *, 0x34)    = 0;
        M2C_FIELD(arg0, void ***, 0x38) = NULL;
        M2C_FIELD(arg0, void ***, 0x3C) = NULL;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) M2C_FIELD(arg0, s32 *, 0x44);
}
