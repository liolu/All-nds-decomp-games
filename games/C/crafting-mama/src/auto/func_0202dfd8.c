#include "m2c.h"

void *func_02029490();                              /* extern */
s32 func_ov001_020cc688();                          /* extern */
extern M2C_UNK func_0202e024;

void func_0202dfd8(void) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = func_02029490();
    if ((M2C_FIELD(temp_r0, s32 *, 0x34) != 2) && (M2C_FIELD(temp_r0, s32 *, 0x3C) != 1)) {
        if (func_ov001_020cc688() != 0) {
            return;
        }
        goto block_6;
    }
block_6:
    temp_r0_2 = M2C_FIELD(temp_r0, s32 *, 0x28);
    if (temp_r0_2 > 0) {
        M2C_FIELD(temp_r0, s32 *, 0x28) = (s32) (temp_r0_2 - 1);
        return;
    }
    M2C_FIELD(temp_r0, M2C_UNK **, 0) = &func_0202e024;
}
