#include "m2c.h"

s32 func_0206d7d8(M2C_UNK, M2C_UNK, M2C_UNK *, void *); /* extern */
extern M2C_UNK func_0206d694;

void func_0206d6b8(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK *arg3, void *arg4) {
    M2C_UNK *var_r3;

    var_r3                    = arg3;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    if (var_r3 == NULL) {
        var_r3 = &func_0206d694;
        arg4   = arg0;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = func_0206d7d8(arg1, arg2, var_r3, arg4);
}
