/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0207b170(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0207b1c4(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0207b230(s32, M2C_UNK);                    /* extern */

s32 func_0207b5a4(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0200f270(0x60, 0);
    var_r4  = temp_r0;
    if (var_r4 != 0) {
        var_r4 = func_0207b230(temp_r0, arg0);
    }
    if (arg2 != 0) {
        func_0207b170(var_r4, arg1, 0);
    } else {
        func_0207b1c4(var_r4, arg1, 0);
    }
    return var_r4;
}
