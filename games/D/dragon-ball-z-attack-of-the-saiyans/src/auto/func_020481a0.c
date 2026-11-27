#include "m2c.h"

s8 func_02012a90(M2C_UNK, M2C_UNK);                 /* extern */
s8 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);        /* extern */
extern s32 data_020d1d24;

s32 func_020481a0(M2C_UNK arg0) {
    s8 temp_r0;
    s8 temp_r4;
    s8 temp_r5;

    temp_r5                                          = func_02012a90(arg0, 1);
    temp_r4                                          = func_02012a90(arg0, 2);
    temp_r0                                          = func_02012b7c(arg0, 3, 0x10);
    M2C_FIELD((data_020d1d24 + temp_r5), s8 *, 0xB1) = temp_r4;
    M2C_FIELD((data_020d1d24 + temp_r5), s8 *, 0xB4) = temp_r0;
    return 1;
}
