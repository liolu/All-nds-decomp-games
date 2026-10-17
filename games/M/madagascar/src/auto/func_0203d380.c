/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0203d380(void *arg0) {
    s32 var_r0;
    u32 temp_r1;

    var_r0  = 0;
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x1E8) - 8;
    if (temp_r1 > 0xAU) {
        return 0;
    }
    if ((1 << temp_r1) & 0x487) {
        var_r0 = 1;
    }
    return var_r0;
}
