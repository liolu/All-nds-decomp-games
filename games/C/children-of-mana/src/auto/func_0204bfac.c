/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204bfac(void *arg0) {
    s32 temp_r0;
    s32 temp_r2;
    s32 var_r3;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x10);
    var_r3  = 0;
    if ((temp_r2 > -0x14) && (temp_r2 < 0x114)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
        if ((temp_r0 > -0x14) && (temp_r0 < 0xD4)) {
            var_r3 = 1;
        }
    }
    return var_r3;
}
