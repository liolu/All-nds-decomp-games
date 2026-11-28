#include "m2c.h"

s32 func_0200dd2c(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_020eb11c;

M2C_UNK *func_0200dd04(M2C_UNK arg0) {
    M2C_UNK *var_r4;
    s32 temp_r0;

    var_r4  = &data_020eb11c;
    temp_r0 = func_0200dd2c(&data_020eb11c, arg0);
    if (temp_r0 != 0) {
        var_r4 = temp_r0 + 0xC;
    }
    return var_r4;
}
