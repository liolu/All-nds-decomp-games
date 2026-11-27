#include "m2c.h"

s32 func_0209312c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_020b6bd0();                                /* extern */
M2C_UNK func_020b6be4(s32);                         /* extern */

s32 func_0206273c(s32 arg0, M2C_UNK arg1, s32 arg2) {
    M2C_UNK var_r2;
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_020b6bd0();
    var_r2  = 4;
    if (arg2 == 0x20) {
        var_r2 = 0x20;
    }
    temp_r4 = func_0209312c(arg1, 2, var_r2);
    func_020b6be4(temp_r5);
    return temp_r4;
}
