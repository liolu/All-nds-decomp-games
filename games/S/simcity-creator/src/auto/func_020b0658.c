#include "m2c.h"

M2C_UNK func_020b0614(M2C_UNK, u8);                 /* extern */

void func_020b0658(M2C_UNK arg0) {
    u8 var_r4;

    var_r4 = 0;
    do {
        func_020b0614(arg0, var_r4);
        var_r4 += 1;
    } while ((u32) var_r4 < 8U);
}
