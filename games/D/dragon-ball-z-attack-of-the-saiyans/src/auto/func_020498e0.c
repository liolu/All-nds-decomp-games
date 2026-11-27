#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02053a7c();                                /* extern */
M2C_UNK func_020578e0(s32);                         /* extern */
extern M2C_UNK data_020cc620;

s32 func_020498e0(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s8 var_r2;

    temp_r4 = func_02012a90(arg0, 1);
    temp_r5 = func_02012a90(arg0, 2);
    func_020578e0(temp_r4);
    if (func_02053a7c() == 0) {
        return 0;
    }
    M2C_FIELD(&data_020cc620, s32 *, 0x150) = temp_r4;
    if (temp_r5 >= 5) {
        var_r2 = 5;
    } else {
        var_r2 = 4;
    }
    M2C_FIELD(&data_020cc620, s8 *, 0x155) = var_r2;
    M2C_FIELD(&data_020cc620, s8 *, 0x156) = (s8) temp_r5;
    return 1;
}
