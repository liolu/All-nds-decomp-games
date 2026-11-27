#include "m2c.h"

extern M2C_UNK data_020e8d54;

s32 func_02096218(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r3;

    var_r3 = (arg1 * 0x60) + ((arg2 * 0xC0) + (s32) &data_020e8d54);
    var_r2 = 0;
loop_1:
    if ((arg0 == M2C_FIELD(var_r3, u16 *, 0)) && !(M2C_FIELD(var_r3, u16 *, 4) & 3)) {
        return var_r2;
    }
    var_r2 += 1;
    var_r3 += 6;
    if (var_r2 >= 0x10) {
        return 0xFF;
    }
    goto loop_1;
}
