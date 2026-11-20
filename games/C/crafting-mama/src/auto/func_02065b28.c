#include "m2c.h"

s32 func_02031700(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020c9fb0;

M2C_UNK *func_02065b28(void) {
    M2C_UNK *var_r4;

    var_r4 = &data_020c9fb0;
    if (func_02031700(&data_020c9fb0) == 0) {
        var_r4 = NULL;
    }
    return var_r4;
}
