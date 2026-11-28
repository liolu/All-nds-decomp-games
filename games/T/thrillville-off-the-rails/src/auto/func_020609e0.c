#include "m2c.h"

s32 func_020609e0(void *arg0) {
    s32 temp_r2;
    s32 var_r0;

    if (M2C_FIELD(arg0, u8 *, 0x12C) == 0) {
        return 0;
    }
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x108);
    var_r0  = 1;
    if ((temp_r2 != 0x05000000) && (temp_r2 != 0x05000400)) {
        var_r0 = 0;
    }
    return var_r0;
}
