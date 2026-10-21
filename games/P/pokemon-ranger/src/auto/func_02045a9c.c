#include "m2c.h"

s32 func_02045a9c(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r0;

    temp_r3 = (arg1 * 0x8C) + arg0;
    var_r0  = 0;
    if (M2C_FIELD((temp_r3 + arg2), u8 *, 0xE) == 0) {
        return 0;
    }
    if (arg2 <= (s32) M2C_FIELD(temp_r3, s32 *, 0x18)) {
        var_r0 = 1;
    }
    return var_r0;
}
