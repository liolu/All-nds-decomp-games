#include "m2c.h"

u32 func_020a2c10();                                /* extern */

s32 func_020a3228(void) {
    u32 temp_r0;

    temp_r0 = func_020a2c10();
    return ((temp_r0 << 0x18) & 0xFF000000) |
           (((temp_r0 << 8) & 0xFF0000) | ((u8) (temp_r0 >> 0x18) | ((temp_r0 >> 8) & 0xFF00)));
}
