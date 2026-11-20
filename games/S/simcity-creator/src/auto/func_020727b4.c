#include "m2c.h"

u32 func_020726d8(s32, M2C_UNK);                    /* extern */

s32 func_020727b4(s32 arg0, u32 arg1) {
    u32 temp_r0;

    temp_r0 = func_020726d8(arg0 + 0x5A3B0, 0x64);
    if (temp_r0 < arg1) {
        return -1;
    }
    if (temp_r0 > arg1) {
        return 1;
    }
    return 0;
}
