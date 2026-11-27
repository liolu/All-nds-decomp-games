/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0203286c(void *arg0, void *arg1) {
    s32 temp_r2;
    s32 temp_r3;

    temp_r3 = (s32) M2C_FIELD(arg0, s32 *, 0x20) >> 0xC;
    if ((temp_r3 > (s32) M2C_FIELD(arg1, s32 *, 0)) && (temp_r3 < (s32) M2C_FIELD(arg1, s32 *, 8))) {
        temp_r2 = (s32) M2C_FIELD(arg0, s32 *, 0x24) >> 0xC;
        if ((temp_r2 > (s32) M2C_FIELD(arg1, s32 *, 4)) && (temp_r2 < (s32) M2C_FIELD(arg1, s32 *, 0xC))) {
            return 1;
        }
    }
    return 0;
}
