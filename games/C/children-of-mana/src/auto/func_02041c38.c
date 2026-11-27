/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s16 func_02040944(); /* extern */

void func_02041c38(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s8 arg3, u8 arg4) {
    M2C_UNK var_r3;

    if (arg3 != 0) {
        var_r3 = 8;
    } else {
        var_r3 = 1;
    }
    M2C_FIELD(arg0, s16 *, 0x176) = func_02040944(arg1, arg0 + 0x168, arg2, var_r3, (s32) arg4);
    M2C_FIELD(arg0, s8 *, 0x18D)  = arg3;
}
