/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205cfd8(M2C_UNK, s32);                /* extern */
s32 func_0205cff4();                                /* extern */
s32 func_0205d2bc();                                /* extern */
s32 func_0205d95c(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_0205d764;

s32 func_0205d89c(M2C_UNK arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = func_0205cff4();
    if (var_r4 == 0) {
        var_r4 = func_0205d95c(arg0, &func_0205d764, func_0205d2bc(), arg0, arg1);
        if (var_r4 != 0) {
            func_0205cfd8(arg0, var_r4);
        }
    }
    return var_r4;
}
