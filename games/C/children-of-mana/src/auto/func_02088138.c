/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02088138(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x2B4);
    if ((temp_r0 == 0x12) || (temp_r0 == 0x13) || ((u32) (temp_r0 - 0x16) <= 5U)) {
        return 1;
    }
    return 0;
}
