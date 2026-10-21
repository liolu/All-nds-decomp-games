#include "m2c.h"

s32 func_020432fc(s32 arg0, s32 arg1) {
    s32 var_r0;

    if (arg0 & 0x80) {
        return 0;
    }
    var_r0 = 1;
    if ((u8) ((s32) (arg0 & 0x70) >> 4) & (1 << arg1)) {
        var_r0 = 0;
    }
    return var_r0;
}
