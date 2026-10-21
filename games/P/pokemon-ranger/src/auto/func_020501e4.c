/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020501e4(s32 arg0, void *arg1) {
    s32 var_r0;
    u8 temp_r1;

    temp_r1 = M2C_FIELD(arg1, u8 *, 0xA);
    if (((s32) temp_r1 >= 0) && ((s32) temp_r1 < 8)) {
        var_r0 = (0 - temp_r1) * 0xC91;
        if (var_r0 < -12868) {
            return var_r0 + 0x6488;
        }
        if (var_r0 > 0x3244) {
            var_r0 -= 0x6488;
        }
        return var_r0;
    }
    return 0x3244;
}
