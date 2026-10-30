#include "m2c.h"

extern M2C_UNK data_020cb2e0;

M2C_UNK *func_02046274(s32 arg0) {
    M2C_UNK *var_r0;

    var_r0 = arg0 + 0x23;
    if (var_r0 == NULL) {
        var_r0 = &data_020cb2e0;
    }
    return var_r0;
}
