#include "m2c.h"

u16 func_02080bd4(s32 arg0, s32 arg1) {
    u16 var_r0;

    var_r0 = arg0 + arg1;
    if ((u32) var_r0 > 0x7FU) {
        var_r0 = 0x7F;
    }
    return var_r0;
}
