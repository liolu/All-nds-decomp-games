#include "m2c.h"

s32 func_02028f10(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_020d4d04;

M2C_UNK *func_02028f78(M2C_UNK arg0) {
    M2C_UNK *var_r4;
    s32 temp_r0;

    var_r4  = &data_020d4d04;
    temp_r0 = func_02028f10(&data_020d4d04, arg0);
    if (temp_r0 != 0) {
        var_r4 = temp_r0 + 0xC;
    }
    return var_r4;
}
