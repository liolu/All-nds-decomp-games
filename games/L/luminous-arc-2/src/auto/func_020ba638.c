#include "m2c.h"

s32 func_020b95a0(s32, M2C_UNK, M2C_UNK, s32);      /* extern */
extern M2C_UNK data_02173dcc;

s32 func_020ba638(void *arg0, M2C_UNK arg1, s32 (*arg2)(s32, M2C_UNK, s32), s32 arg3) {
    s32 temp_r0;
    void *var_r6;

    var_r6 = arg0;
    if (var_r6 == NULL) {
        var_r6 = M2C_FIELD(&data_02173dcc, void **, 0xC);
    }
    if (var_r6 == NULL) {
        return arg3;
    }
    temp_r0 = arg2(M2C_FIELD(var_r6, s32 *, 0xC), arg1, arg3);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    return func_020b95a0(M2C_FIELD(var_r6, s32 *, 0xC), arg1, 2, arg3);
}
