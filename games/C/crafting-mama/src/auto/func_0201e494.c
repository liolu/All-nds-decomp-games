#include "m2c.h"

s32 func_0201e424(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_0201e984();                            /* extern */
extern M2C_UNK data_020944c0;
extern M2C_UNK func_0201e974;

s32 func_0201e494(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_0201e424(arg0, &func_0201e974, 0);
    M2C_FIELD(&data_020944c0, s32 *, 0x24) = temp_r0;
    if (temp_r0 == 0) {
        func_0201e984();
    }
    return M2C_FIELD(&data_020944c0, s32 *, 0x24);
}
