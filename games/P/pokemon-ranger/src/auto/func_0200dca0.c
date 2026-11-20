/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200dca0(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x5F0);
    if ((temp_r0 == 0x34) || (temp_r0 == 0x35) || (temp_r0 == 0x2C) || (temp_r0 == 0x2A) || (temp_r0 == 0x37) ||
        (temp_r0 == 0x39) || (temp_r0 == 0x3B) || (temp_r0 == 0x3D) || ((u32) (temp_r0 - 0xD) <= 3U)) {
        return 1;
    }
    return 0;
}
