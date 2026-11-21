#include "m2c.h"

M2C_UNK func_02042fd4(void *);                      /* extern */
extern M2C_UNK data_020bf368;
extern M2C_UNK data_020bf394;

void *func_02099984(void *arg0) {
    s32 var_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf394;
    if (M2C_FIELD(arg0, s32 *, 0x2C) & 0x10) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_02042fd4(arg0 + 0x20);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf368;
    return arg0;
}
