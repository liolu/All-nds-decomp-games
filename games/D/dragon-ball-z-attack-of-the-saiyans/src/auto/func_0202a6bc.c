#include "m2c.h"

extern M2C_UNK data_020cc268;

s32 func_0202a6bc(void) {
    s32 var_r0;

    var_r0 = 0;
    if (((u32) (M2C_FIELD(&data_020cc268, u8 *, 4) << 0x1C) >> 0x1F) == 1) {
        var_r0 = 1;
    }
    return var_r0;
}
