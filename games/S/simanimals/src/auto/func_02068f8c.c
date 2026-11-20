#include "m2c.h"

s32 func_02068e60(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_020692bc();                            /* extern */
extern M2C_UNK data_0209062c;
extern M2C_UNK func_020692ac;

s32 func_02068f8c(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_02068e60(arg0, &func_020692ac, 0);
    M2C_FIELD(&data_0209062c, s32 *, 0x10) = temp_r0;
    if (temp_r0 == 0) {
        func_020692bc();
    }
    return M2C_FIELD(&data_0209062c, s32 *, 0x10);
}
