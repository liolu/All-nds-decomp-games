#include "m2c.h"

s32 func_020dbb80(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020dc204();                            /* extern */
extern M2C_UNK data_021e3798;
extern M2C_UNK func_020dc1f4;

s32 func_020dbbfc(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                                = func_020dbb80(arg0, arg1, &func_020dc1f4, 0);
    M2C_FIELD(&data_021e3798, s32 *, 0x2C) = temp_r0;
    if (temp_r0 == 0) {
        func_020dc204();
    }
    return M2C_FIELD(&data_021e3798, s32 *, 0x2C);
}
