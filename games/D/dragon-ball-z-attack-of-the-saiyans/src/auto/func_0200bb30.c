/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_0200bbb8(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020af090;

s32 func_0200bb30(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = 0;
loop_1:
    if (M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020af090 + (var_r4 * 4))), s32 *, 0xB4) != 0) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    if (var_r2 == 0) {
        func_0200bbb8(var_r4, arg0, arg1, arg2);
        return var_r4;
    }
    var_r4 += 1;
    if (var_r4 >= 8) {
        return -1;
    }
    goto loop_1;
}
