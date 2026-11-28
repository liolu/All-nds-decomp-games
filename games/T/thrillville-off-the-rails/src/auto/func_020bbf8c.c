#include "m2c.h"

s32 func_020bbf8c(void *arg0) {
    s32 var_r2;
    u8 *var_r3;
    u8 temp_r1;

    if (((u32) (M2C_FIELD(arg0, u8 *, 0x1C) << 0x1F) >> 0x1F) == 0) {
        return 0;
    }
    var_r3 = arg0 + 4;
    var_r2 = 0;
loop_3:
    temp_r1 = *var_r3;
    if ((((u32) (temp_r1 << 0x1F) >> 0x1F) != 0) && (((u32) (temp_r1 << 0x1E) >> 0x1F) != 0) &&
        (((u32) (temp_r1 << 0x1D) >> 0x1F) == 0)) {
        return 0;
    }
    var_r2 += 1;
    var_r3 += 6;
    if (var_r2 >= 4) {
        return 1;
    }
    goto loop_3;
}
