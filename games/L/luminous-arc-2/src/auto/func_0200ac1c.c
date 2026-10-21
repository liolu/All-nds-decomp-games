#include "m2c.h"

M2C_UNK func_0200a668(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0200fe14();                                /* extern */

void func_0200ac1c(M2C_UNK arg0) {
    M2C_UNK var_r1;

    if (func_0200fe14() != 0) {
        var_r1 = 5;
    } else {
        var_r1 = 0;
    }
    func_0200a668(arg0, var_r1);
}
