#include "m2c.h"

extern M2C_UNK data_020d6814;
extern M2C_UNK func_0204e8e8;

void func_0204e8f4(M2C_UNK *arg0, s32 arg1) {
    M2C_UNK *var_r0;

    var_r0 = arg0;
    if (var_r0 == NULL) {
        var_r0 = &func_0204e8e8;
    }
    M2C_FIELD(&data_020d6814, M2C_UNK **, 0) = var_r0;
    M2C_FIELD(&data_020d6814, s32 *, 8)      = arg1;
}
