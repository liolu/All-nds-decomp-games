#include "m2c.h"

M2C_UNK func_02009b4c(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0200e7ec();                                /* extern */

void func_0200a0f0(M2C_UNK arg0) {
    M2C_UNK var_r1;

    if (func_0200e7ec() != 0) {
        var_r1 = 5;
    } else {
        var_r1 = 0;
    }
    func_02009b4c(arg0, var_r1);
}
