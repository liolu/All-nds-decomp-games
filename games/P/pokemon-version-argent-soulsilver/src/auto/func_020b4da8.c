#include "m2c.h"

s32 func_020b4d40(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_021d84d4;

M2C_UNK *func_020b4da8(M2C_UNK arg0) {
    M2C_UNK *var_r4;
    s32 temp_r0;

    var_r4  = &data_021d84d4;
    temp_r0 = func_020b4d40(&data_021d84d4, arg0);
    if (temp_r0 != 0) {
        var_r4 = temp_r0 + 0xC;
    }
    return var_r4;
}
