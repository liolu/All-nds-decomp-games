/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207512c(M2C_UNK, s32);                /* extern */
s32 func_02075148();                                /* extern */
s32 func_02075474();                                /* extern */
s32 func_020761b4(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_02075df0;

s32 func_02076138(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_02075148();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_02075474();
        }
        var_r4 = func_020761b4(arg0, &func_02075df0, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_0207512c(arg0, var_r4);
        }
    }
    return var_r4;
}
