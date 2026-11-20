/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204a7fc(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1AEC);
    if ((temp_r0 == 2) || (temp_r0 == 8) || (temp_r0 == 9) || (temp_r0 == 0xA) || (temp_r0 == 0xB) || (temp_r0 == 0xC) ||
        (temp_r0 == 0xD) || (temp_r0 == 0xE) || (temp_r0 == 0x1D)) {
        return 1;
    }
    return 0;
}
