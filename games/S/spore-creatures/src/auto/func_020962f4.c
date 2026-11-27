#include "m2c.h"

extern M2C_UNK data_020e8d54;

s32 func_020962f4(s32 arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r3;

    var_r3 = (arg0 * 0x60) + ((arg1 * 0xC0) + (s32) &data_020e8d54);
    var_r0 = 0;
loop_1:
    if ((M2C_FIELD(var_r3, u16 *, 0) == 0xFFFF) && !(M2C_FIELD(var_r3, u16 *, 4) & 2)) {
        return var_r0;
    }
    var_r0 += 1;
    var_r3 += 6;
    if (var_r0 >= 0x10) {
        return 0xFF;
    }
    goto loop_1;
}
