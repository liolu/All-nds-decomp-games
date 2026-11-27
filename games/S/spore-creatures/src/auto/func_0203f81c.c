#include "m2c.h"

M2C_UNK func_02040e2c();                            /* extern */
M2C_UNK func_0209b868(s32, s32);                    /* extern */

void func_0203f81c(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    void *temp_r1;

    func_02040e2c();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC0);
    if (temp_r0 != 0) {
        func_0209b868(temp_r0, arg1);
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0xC4);
    if (temp_r1 == NULL) {
        return;
    }
    temp_r0_2 = M2C_FIELD(temp_r1, s32 *, 0x30);
    if (arg1 != 0) {
        M2C_FIELD(temp_r1, s32 *, 0x30) = (s32) (temp_r0_2 | 1);
        return;
    }
    M2C_FIELD(temp_r1, s32 *, 0x30) = (s32) (temp_r0_2 & ~1);
}
