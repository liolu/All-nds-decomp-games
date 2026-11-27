/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u32 func_02005570(s32);                             /* extern */

s32 func_02046368(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r5;
    u32 temp_r0;
    u32 temp_r4;

    temp_r5 = (s32) M2C_FIELD(arg0, s32 *, 0x1197C) >> 0xC;
    temp_r4 = func_02005570(((s32) M2C_FIELD(arg0, s32 *, 0x11974) >> 0xC) - (arg1 >> 0xC));
    temp_r0 = func_02005570(temp_r5 - (arg2 >> 0xC));
    if ((temp_r4 < 9U) && (temp_r0 < 9U)) {
        return 1;
    }
    return 0;
}
