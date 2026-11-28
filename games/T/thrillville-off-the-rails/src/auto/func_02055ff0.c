#include "m2c.h"

void *func_0203b32c(s32, s32);                      /* extern */

void func_02055ff0(s32 arg0, s32 *arg1) {
    s32 temp_r1;
    void **temp_r0_2;
    void *temp_r0;

    temp_r0                      = func_0203b32c(arg0 + 8, *arg1 + 1);
    temp_r1                      = M2C_FIELD(temp_r0, s32 *, 0) - 1;
    M2C_FIELD(temp_r0, s32 *, 0) = temp_r1;
    if (temp_r1 != 0) {
        return;
    }
    temp_r0_2 = M2C_FIELD(temp_r0, void ***, 0xC);
    if (temp_r0_2 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 0xC)(temp_r0_2);
}
