/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_0200101c(s32, M2C_UNK);                /* extern */

void func_0209a13c(s32 arg0, M2C_UNK arg1) {
    s32 var_r5;

    var_r5 = 0;
    do {
        func_0200101c(arg0 + 0x58 + (var_r5 * 8), arg1);
        var_r5 += 1;
    } while (var_r5 < 2);
}
