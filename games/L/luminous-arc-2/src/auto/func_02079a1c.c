#include "m2c.h"

void func_02079a1c(void *arg0) {
    u16 temp_r2;

    temp_r2 = M2C_FIELD(arg0, u16 *, 0x762);
    if ((u32) temp_r2 <= 0x1E0U) {
        M2C_FIELD(arg0, u16 *, 0x762) = (u16) (temp_r2 + 1);
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x762) = 0U;
    M2C_FIELD(arg0, s32 *, 4)     = (s32) (M2C_FIELD(arg0, s32 *, 4) | 1);
}
