#include "m2c.h"

extern M2C_UNK data_020cb2d8;

M2C_UNK *func_0204622c(s32 arg0) {
    M2C_UNK *var_r0;

    var_r0 = arg0 + 4;
    if (var_r0 == NULL) {
        var_r0 = &data_020cb2d8;
    }
    return var_r0;
}
