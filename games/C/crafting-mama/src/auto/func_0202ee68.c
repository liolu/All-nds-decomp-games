#include "m2c.h"

void *func_02029490();                              /* extern */
s32 func_0202ede0(s32);                             /* extern */
M2C_UNK func_0205ec44(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_0202ee68(void) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    void *temp_r0;

    temp_r0                         = func_02029490();
    temp_r0_2                       = M2C_FIELD(temp_r0, s32 *, 0x2C) + 1;
    M2C_FIELD(temp_r0, s32 *, 0x2C) = temp_r0_2;
    if (temp_r0_2 < 0x10) {
        return;
    }
    temp_r0_3 = func_0202ede0(M2C_FIELD(temp_r0, s32 *, 0x30));
    if (temp_r0_3 != 0) {
        func_0205ec44(temp_r0_3, 0x1F, 0x1F, 0x1F);
    }
    *M2C_FIELD(temp_r0, s32 **, 0x40) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x10)   = 1;
}
