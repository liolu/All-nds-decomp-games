#include "m2c.h"

void *func_02078f24();                              /* extern */

void func_020a5088(void) {
    u8 temp_r0;
    void *temp_r0_2;

    temp_r0 = M2C_FIELD(func_02078f24(), u8 *, 0x77B);
    if (((u32) temp_r0 >= 0x27U) && ((u32) temp_r0 <= 0x30U)) {
        return;
    }
    if (temp_r0 == 0x23) {
        return;
    }
    temp_r0_2                      = func_02078f24();
    M2C_FIELD(temp_r0_2, s32 *, 4) = (s32) (M2C_FIELD(temp_r0_2, s32 *, 4) | 1);
}
