#include "m2c.h"

M2C_UNK func_02007e64(s32, s32);                    /* extern */
M2C_UNK func_02008a44(s32);                         /* extern */
M2C_UNK func_0202685c(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_020268e4(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_0202685c(arg0, arg2, arg3);
    func_02007e64(arg0, arg0 + arg1);
    func_02008a44(arg0);
}
