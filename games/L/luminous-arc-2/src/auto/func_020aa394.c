#include "m2c.h"

s32 func_020aa068();                                /* extern */
M2C_UNK func_020aa1e4(M2C_UNK, s32);                /* extern */

void func_020aa394(M2C_UNK arg0) {
    s32 var_r4;

    var_r4 = func_020aa068() - 1;
    if (var_r4 < 0) {
        return;
    }
    do {
        func_020aa1e4(arg0, var_r4);
        var_r4 -= 1;
    } while (var_r4 >= 0);
}
