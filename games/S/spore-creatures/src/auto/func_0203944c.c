#include "m2c.h"

s32 func_020394d8(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_02093480(M2C_UNK);                         /* extern */
extern M2C_UNK data_027e02e0;

void func_0203944c(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_r0;

    var_r0 = func_02093480(0x20);
    if (var_r0 != 0) {
        var_r0 = func_020394d8(var_r0, arg1, arg2);
    }
    *((M2C_UNK *) ((s8 *) &data_027e02e0 + (arg0 * 4))) = var_r0;
}
