/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020e8160(void *arg0) {
    s32 var_r0;
    u32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, u32 *, 0x8);
    var_r0  = 0;
    if (temp_r2 > 4U) {
        return 0;
    }
    if ((1 << temp_r2) & 0x19) {
        var_r0 = 1;
    }
    return var_r0;
}
