/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f7a4(void *arg0, s32 arg1) {
    s32 var_r0;
    u32 temp_r2;

    temp_r2 = (u32) (M2C_FIELD(arg0, u8 *, 0x28) << 0x1E) >> 0x1E;
    if (temp_r2 == 0) {
        return 0;
    }
    if (arg1 & 2) {
        if (temp_r2 == arg1) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    if ((temp_r2 & ~2) == arg1) {
        return 1;
    }
    return 0;
}
