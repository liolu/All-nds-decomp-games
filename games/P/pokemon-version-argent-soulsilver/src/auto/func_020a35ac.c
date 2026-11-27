#include "m2c.h"

u32 func_020a2b90();                                /* extern */

s32 func_020a35ac(s32 arg0, s32 *arg1) {
    u32 temp_r0;

    temp_r0 = func_020a2b90();
    if (temp_r0 == 0) {
        return 0;
    }
    *arg1 = ((temp_r0 << 0x18) & 0xFF000000) |
            (((temp_r0 << 8) & 0xFF0000) | ((u8) (temp_r0 >> 0x18) | ((temp_r0 >> 8) & 0xFF00)));
    return 1;
}
