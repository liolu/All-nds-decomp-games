/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0203c958();                                /* extern */

s32 func_020410b0(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;

    temp_r0 = func_0203c958();
    if (temp_r0 == 0) {
        return temp_r0;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if ((temp_r1 != 0x1C) && (temp_r1 != 0x1D) && (temp_r1 != 0x1E)) {
        return temp_r0;
    }
    return 0;
}
