#include "m2c.h"

s32 func_0204e990(void *arg0) {
    u32 temp_r2;
    u8 var_r3;

    temp_r2 = M2C_FIELD(arg0, u32 *, 4);
    var_r3  = M2C_FIELD(arg0, u8 *, 0xC);
    if (var_r3 == 0) {
        var_r3 = 2;
    }
    return (((temp_r2 >> 0x10) + 1) * var_r3) ^ (((u16) temp_r2 + 1) * M2C_FIELD(arg0, u8 *, 0xD));
}
