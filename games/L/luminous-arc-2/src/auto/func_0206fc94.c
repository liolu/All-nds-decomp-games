#include "m2c.h"

s32 func_020702a8();                                /* extern */

s32 func_0206fc94(void *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 4) < 0) {
        return -0x40;
    }
    temp_r0 = func_020702a8();
    if (temp_r0 >= 0) {
        return temp_r0;
    }
    if (temp_r0 == -0xB1) {
        M2C_FIELD(arg0, s32 *, 4) = -0x47;
    }
    return temp_r0;
}
