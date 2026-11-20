#include "m2c.h"

s32 func_020d351c();                                /* extern */

void func_020794b4(void *arg0) {
    u16 temp_r1;

    if (func_020d351c() == 1) {
        M2C_FIELD(arg0, u16 *, 0x760) = 0U;
        M2C_FIELD(arg0, u8 *, 0x77A)  = (u8) (M2C_FIELD(arg0, u8 *, 0x77A) + 1);
        return;
    }
    temp_r1 = M2C_FIELD(arg0, u16 *, 0x760);
    if ((u32) temp_r1 <= 0x3CU) {
        M2C_FIELD(arg0, u16 *, 0x760) = (u16) (temp_r1 + 1);
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x760) = 0U;
    M2C_FIELD(arg0, s32 *, 4)     = (s32) (M2C_FIELD(arg0, s32 *, 4) | 1);
}
