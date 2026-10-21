#include "m2c.h"

s32 func_02095d50();                                /* extern */
s32 func_0209c148(s32);                             /* extern */
M2C_UNK func_0209c17c(s32);                         /* extern */
M2C_UNK func_0209c484();                            /* extern */
s32 func_0209c564();                                /* extern */
M2C_UNK func_020955d4(M2C_UNK);                     /* extern */
extern s32 data_0217254c;

s32 func_0209c60c(void) {
    s32 var_r4;

    if (data_0217254c != 0) {
        var_r4 = func_0209c564();
        if (var_r4 == 0) {
            func_0209c17c(data_0217254c);
            if (func_0209c148(data_0217254c) != 0) {
                data_0217254c = 0;
            }
            var_r4 = -0x1A;
        }
        func_0209c484();
    } else if (func_02095d50() == 0) {
        var_r4 = -0x1A;
    } else {
        func_020955d4(0);
        var_r4 = 0;
    }
    return var_r4;
}
