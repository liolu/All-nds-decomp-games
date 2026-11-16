#include "m2c.h"

s32 func_020857e4(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_02085edc();                            /* extern */
extern M2C_UNK data_020d89f4;
extern M2C_UNK func_02085ecc;

s32 func_02085858(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                              = func_020857e4(arg0, &func_02085ecc, 0);
    M2C_FIELD(&data_020d89f4, s32 *, 44) = temp_r0;
    if (temp_r0 == 0) {
        func_02085edc();
    }
    return M2C_FIELD(&data_020d89f4, s32 *, 44);
}
