#include "m2c.h"

void *func_02029490();                              /* extern */
M2C_UNK func_0202ade4(s32);                         /* extern */

void func_02033f54(void) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    void *temp_r0;

    temp_r0                         = func_02029490();
    temp_r1                         = M2C_FIELD(temp_r0, s32 *, 0x1C) + 1;
    M2C_FIELD(temp_r0, s32 *, 0x1C) = temp_r1;
    if (temp_r1 < (s32) M2C_FIELD(temp_r0, s32 *, 0x20)) {
        return;
    }
    temp_r0_2 = M2C_FIELD(temp_r0, s32 *, 0x24);
    if (temp_r0_2 != 0) {
        func_0202ade4(temp_r0_2 + 0x18);
        func_0202ade4(M2C_FIELD(temp_r0, s32 *, 0x24) + 0x20);
    }
    temp_r0_3 = M2C_FIELD(temp_r0, s32 *, 0x28);
    if (temp_r0_3 != 0) {
        func_0202ade4(temp_r0_3 + 0x14);
        func_0202ade4(M2C_FIELD(temp_r0, s32 *, 0x28) + 0x1C);
    }
    M2C_FIELD(temp_r0, s32 *, 0x10) = 1;
}
