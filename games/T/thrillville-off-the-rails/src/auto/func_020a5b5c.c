#include "m2c.h"

M2C_UNK *func_020a5c44(M2C_UNK *, s32 *);           /* extern */

void func_020a5b5c(M2C_UNK *arg0, s32 *arg1, M2C_UNK **arg2) {
    M2C_UNK *temp_r0;
    M2C_UNK *var_r4;

    var_r4 = *arg2;
    if (var_r4 == NULL) {
        var_r4 = arg0;
    }
    temp_r0                           = func_020a5c44(arg0, arg1);
    M2C_FIELD(temp_r0, s32 *, 8)      = (s32) *arg1;
    M2C_FIELD(temp_r0, M2C_UNK **, 0) = var_r4;
    M2C_FIELD(temp_r0, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(var_r4, M2C_UNK **, 4);
    *M2C_FIELD(var_r4, M2C_UNK **, 4) = temp_r0;
    M2C_FIELD(var_r4, M2C_UNK **, 4)  = temp_r0;
}
