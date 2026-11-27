#include "m2c.h"

M2C_UNK func_020d7edc(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020ddb24();                                /* extern */

void func_020d84a0(M2C_UNK arg0) {
    M2C_UNK var_r1;

    if (func_020ddb24() != 0) {
        var_r1 = 5;
    } else {
        var_r1 = 0;
    }
    func_020d7edc(arg0, var_r1);
}
