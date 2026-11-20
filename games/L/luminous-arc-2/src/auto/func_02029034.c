#include "m2c.h"

s32 func_02028fcc(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_0216bc40;

M2C_UNK *func_02029034(M2C_UNK arg0) {
    M2C_UNK *var_r4;
    s32 temp_r0;

    var_r4  = &data_0216bc40;
    temp_r0 = func_02028fcc(&data_0216bc40, arg0);
    if (temp_r0 != 0) {
        var_r4 = temp_r0 + 0xC;
    }
    return var_r4;
}
