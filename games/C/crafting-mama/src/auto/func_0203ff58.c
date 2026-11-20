#include "m2c.h"

s32 func_020401ec();                                /* extern */
M2C_UNK func_0204d654(s32, M2C_UNK, M2C_UNK, M2C_UNK *, void *, s32); /* extern */
void *func_02060e9c();                              /* extern */
extern M2C_UNK func_0203ff4c;

void func_0203ff58(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_020401ec();
    if (M2C_FIELD(func_02060e9c(), s32 *, 4) != 0xB) {
        return;
    }
    if (M2C_FIELD(func_02060e9c(), s32 *, 8) != 1) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3C);
    if ((temp_r0 != 1) && (temp_r0 != 2)) {
        return;
    }
    func_0204d654(temp_r4, 0, 0, &func_0203ff4c, arg0, 0x119);
}
