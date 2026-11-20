#include "m2c.h"

M2C_UNK func_020ba6e0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020bed28();                                /* extern */

void func_020baccc(M2C_UNK arg0) {
    M2C_UNK var_r1;

    if (func_020bed28() != 0) {
        var_r1 = 5;
    } else {
        var_r1 = 0;
    }
    func_020ba6e0(arg0, var_r1);
}
