#include "m2c.h"

M2C_UNK func_02030f20(s32);                         /* extern */

void func_02030f4c(void) {
    s32 var_r4;

    var_r4 = 0;
    do {
        func_02030f20(var_r4);
        var_r4 += 1;
    } while (var_r4 < 4);
}
