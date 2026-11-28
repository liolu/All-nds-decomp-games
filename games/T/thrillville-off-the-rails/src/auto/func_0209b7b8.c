#include "m2c.h"

M2C_UNK *func_0209b864(M2C_UNK *, s32 *);           /* extern */

void func_0209b7b8(M2C_UNK *arg0, s32 *arg1, M2C_UNK **arg2) {
    M2C_UNK *temp_r0;
    M2C_UNK *var_r4;

    var_r4 = *arg2;
    if (var_r4 == NULL) {
        var_r4 = arg0;
    }
    temp_r0                           = func_0209b864(arg0, arg1);
    M2C_FIELD(temp_r0, s32 *, 8)      = (s32) *arg1;
    M2C_FIELD(temp_r0, M2C_UNK **, 0) = var_r4;
    M2C_FIELD(temp_r0, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(var_r4, M2C_UNK **, 4);
    *M2C_FIELD(var_r4, M2C_UNK **, 4) = temp_r0;
    M2C_FIELD(var_r4, M2C_UNK **, 4)  = temp_r0;
}
