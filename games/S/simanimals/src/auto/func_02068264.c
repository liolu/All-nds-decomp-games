#include "m2c.h"

M2C_UNK func_02067d60(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0206bb8c();                                /* extern */

void func_02068264(M2C_UNK arg0) {
    M2C_UNK var_r1;

    if (func_0206bb8c() != 0) {
        var_r1 = 5;
    } else {
        var_r1 = 0;
    }
    func_02067d60(arg0, var_r1);
}
