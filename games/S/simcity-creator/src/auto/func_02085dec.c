#include "m2c.h"

u32 func_0201a224();                    /* extern */

void func_02085dec(void *arg0, s32 arg1) {
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;

    M2C_FIELD(arg0, s32 *, 0xC)  = arg1;
    temp_r0                      = func_0201a224(0x05265C00U);
    M2C_FIELD(arg0, u32 *, 0x6C) = temp_r0;
    temp_r0_2                    = func_0201a224(temp_r0, 0x18);
    M2C_FIELD(arg0, u32 *, 0x70) = temp_r0_2;
    temp_r0_3                    = func_0201a224(temp_r0_2, 0x5A0);
    M2C_FIELD(arg0, u32 *, 0x74) = temp_r0_3;
    if (temp_r0_3 < 0x32U) {
        M2C_FIELD(arg0, u32 *, 0x74) = 0x32U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) < 0x32U) {
        M2C_FIELD(arg0, u32 *, 0x70) = 0x32U;
    }
}
