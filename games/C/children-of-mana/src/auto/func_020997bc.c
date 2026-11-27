#include "m2c.h"

s32 func_020997bc(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r0;

    var_r0 = 1;
    if ((u32) (u8) (arg1 + 0xFF) > 1U) {
        return 1;
    }
    if (arg2 < 0x74) {
        return 1;
    }
    if (arg2 <= 0x7D) {
        var_r0 = 0;
    }
    return var_r0;
}
