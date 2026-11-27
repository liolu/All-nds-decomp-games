/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s16 func_02040944(); /* extern */

void func_0207ae5c(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s8 arg3) {
    M2C_UNK var_r3;

    if (arg3 != 0) {
        var_r3 = 8;
    } else {
        var_r3 = 1;
    }
    M2C_FIELD(arg0, s16 *, 0x16) = func_02040944(arg1, arg0 + 8, arg2, var_r3, 1);
    M2C_FIELD(arg0, s8 *, 0x2D)  = arg3;
}
