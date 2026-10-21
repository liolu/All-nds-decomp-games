#include "m2c.h"

s32 func_02025ef0();                                /* extern */
s32 func_02026180();                                /* extern */
M2C_UNK func_020261a8(M2C_UNK, s32);                /* extern */
s32 func_020265dc(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_020268b4;

s32 func_0202667c(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_02026180();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_02025ef0();
        }
        var_r4 = func_020265dc(arg0, &func_020268b4, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_020261a8(arg0, var_r4);
        }
    }
    return var_r4;
}
