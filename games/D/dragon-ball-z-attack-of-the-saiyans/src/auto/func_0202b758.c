#include "m2c.h"

extern M2C_UNK data_027e0104;

void func_0202b758(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 <= 0) {
        var_r0 = 1;
    }
    if (var_r0 > 0x1F) {
        var_r0 = 0x1F;
    }
    M2C_FIELD(&data_027e0104, s8 *, 0x97) = (s8) var_r0;
}
