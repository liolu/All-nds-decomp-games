#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern s32 data_020d1d24;

s32 func_020322a4(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r4;

    temp_r4                                            = func_02012a90(arg0, 1);
    temp_r0                                            = func_02012b7c(arg0, 2, 0);
    temp_r1                                            = temp_r4 * 0x14;
    M2C_FIELD((data_020d1d24 + temp_r1), s8 *, 0x3D00) = 0x1F;
    if (temp_r0 & 1) {
        M2C_FIELD((data_020d1d24 + temp_r1), s8 *, 0x3D00) = 0x14;
    }
    M2C_FIELD((data_020d1d24 + temp_r1), s8 *, 0x3CF9) = 0;
    if (temp_r0 & 2) {
        M2C_FIELD((data_020d1d24 + temp_r1), s8 *, 0x3CF9) = 1;
    }
    return 1;
}
