/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020ac610(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xF0);
    if ((temp_r0 == 0x12) || (temp_r0 == 0x14)) {
        return 0;
    }
    return 1;
}
