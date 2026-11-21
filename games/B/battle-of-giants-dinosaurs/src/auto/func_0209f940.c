#include "m2c.h"

u32 func_0209f940(void *arg0, u32 arg1) {
    u32 var_r0;

    var_r0 = arg1 >> M2C_FIELD(arg0, s32 *, 0x14);
    if (arg1 & (M2C_FIELD(arg0, s32 *, 0xC) - 1)) {
        var_r0 += 1;
    }
    return var_r0;
}
