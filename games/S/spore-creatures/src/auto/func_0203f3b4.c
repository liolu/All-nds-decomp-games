#include "m2c.h"

u16 func_0203f3b4(void *arg0) {
    s32 var_r0;
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 0x64);
    if ((temp_r1 >> 0x1C) == 2) {
        var_r0 = temp_r1 & ~0xF0000000;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        return M2C_FIELD(var_r0, u16 *, 2);
    }
    return 0x16U;
}
