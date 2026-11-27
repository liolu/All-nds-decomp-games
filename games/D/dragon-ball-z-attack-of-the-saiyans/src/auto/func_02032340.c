#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern s32 data_020d1d24;

s32 func_02032340(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4                                                      = func_02012a90(arg0, 1);
    M2C_FIELD(((temp_r4 * 0x14) + data_020d1d24), s32 *, 0x3CF0) = func_02012b7c(arg0, 2, 0);
    return 1;
}
