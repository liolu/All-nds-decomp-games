#include "m2c.h"

s32 func_02006f0c(s32, s32);                        /* extern */
void *func_02029490();                              /* extern */
M2C_UNK func_020473dc(s32, s32, s32);               /* extern */

void func_0204737c(void) {
    s32 temp_r4;
    s32 temp_r6;
    void *temp_r0;

    temp_r0                         = func_02029490();
    M2C_FIELD(temp_r0, s32 *, 0x2C) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x2C) + 1);
    temp_r6                         = M2C_FIELD(temp_r0, s32 *, 0x28);
    temp_r4                         = func_02006f0c(M2C_FIELD(temp_r0, s32 *, 0x20), temp_r6);
    func_020473dc(M2C_FIELD(temp_r0, s32 *, 0x1C), temp_r4, func_02006f0c(M2C_FIELD(temp_r0, s32 *, 0x24), temp_r6));
    if (M2C_FIELD(temp_r0, s32 *, 0x2C) == M2C_FIELD(temp_r0, s32 *, 0x28)) {
        M2C_FIELD(temp_r0, s32 *, 0x10) = 1;
    }
}
