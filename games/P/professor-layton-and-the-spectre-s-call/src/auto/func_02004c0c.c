#include "m2c.h"

s32 func_02004480();                                /* extern */
s32 func_02004710();                                /* extern */
M2C_UNK func_02004738(M2C_UNK, s32);                /* extern */
s32 func_02004b68(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_02004e64;

s32 func_02004c0c(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_02004710();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_02004480();
        }
        var_r4 = func_02004b68(arg0, &func_02004e64, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_02004738(arg0, var_r4);
        }
    }
    return var_r4;
}
