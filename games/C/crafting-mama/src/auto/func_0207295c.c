#include "m2c.h"

void *func_02072ba0();                              /* extern */

u32 func_0207295c(void) {
    u32 temp_r0_2;
    void *temp_r0;

    temp_r0_2 = (u32) (M2C_FIELD(func_02072ba0(), u16 *, 0x14) << 0x1F) >> 0x1F;
    if (temp_r0_2 == 0) {
        return temp_r0_2;
    }
    temp_r0                         = func_02072ba0();
    M2C_FIELD(temp_r0, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x18) | 0x200);
    return (u32) temp_r0;
}
