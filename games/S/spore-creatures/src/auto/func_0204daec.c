#include "m2c.h"

s32 func_0204db24(M2C_UNK, s32);                    /* extern */

s32 func_0204daec(M2C_UNK arg0) {
    s32 var_r4;

    var_r4 = 0;
loop_1:
    if (func_0204db24(arg0, var_r4) != 0) {
        return 1;
    }
    var_r4 += 1;
    if (var_r4 >= 3) {
        return 0;
    }
    goto loop_1;
}
