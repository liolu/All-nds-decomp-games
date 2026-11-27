/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c4764(void *arg0) {
    s32 var_r0;
    u32 temp_r2;

    var_r0  = 0;
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x3C8) - 2;
    if (temp_r2 > 4U) {
        return 0;
    }
    if ((1 << temp_r2) & 0x1B) {
        var_r0 = 1;
    }
    return var_r0;
}
