#include "m2c.h"

M2C_UNK func_02060b78(s32);                         /* extern */

void func_02060f98(void) {
    s32 var_r4;

    var_r4 = 0;
    do {
        func_02060b78(var_r4);
        var_r4 += 1;
    } while (var_r4 < 9);
}
