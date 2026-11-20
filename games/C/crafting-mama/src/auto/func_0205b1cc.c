/* compiler: 1.2/sp3  */
#include "m2c.h"

s32 func_02031700();                                /* extern */
s32 func_0203663c(M2C_UNK);                         /* extern */
s32 func_0205b25c(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */

s32 func_0205b1cc(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    M2C_UNK var_r5;
    s32 temp_r4;

    var_r5  = 0;
    temp_r4 = func_0203663c(0x2A);
    if (func_02031700() == 0) {
        return 0;
    }
    if (arg2 != 0) {
        var_r5 = 1;
    }
    return func_0205b25c(temp_r4, arg0, arg1, var_r5);
}
