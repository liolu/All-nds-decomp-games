#include "m2c.h"

extern M2C_UNK data_020e8d54;

s32 func_02096268(s32 arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r2;

    var_r2 = (arg0 * 0x60) + ((arg1 * 0xC0) + (s32) &data_020e8d54);
    var_r0 = 0;
loop_1:
    if (!(M2C_FIELD(var_r2, u16 *, 4) & 3)) {
        return var_r0;
    }
    var_r0 += 1;
    var_r2 += 6;
    if (var_r0 >= 0x10) {
        return 0xFF;
    }
    goto loop_1;
}
