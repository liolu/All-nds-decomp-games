#include "m2c.h"

s8 func_02012a90(M2C_UNK, M2C_UNK);                 /* extern */
s8 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);        /* extern */
extern s32 data_020d1d24;

s32 func_02048024(M2C_UNK arg0) {
    s8 temp_r0;
    s8 temp_r4;
    s8 temp_r5;
    s8 temp_r6;

    temp_r5                                                   = func_02012a90(arg0, 1);
    temp_r4                                                   = func_02012a90(arg0, 2);
    temp_r6                                                   = func_02012b7c(arg0, 3, 0);
    temp_r0                                                   = func_02012b7c(arg0, 4, 0x1E);
    M2C_FIELD((data_020d1d24 + (temp_r5 * 4)), s8 *, 0x3C68)  = temp_r4;
    M2C_FIELD((data_020d1d24 + (temp_r5 * 4)), s16 *, 0x3C6A) = (s16) (0 - temp_r6);
    M2C_FIELD((data_020d1d24 + (temp_r5 * 4)), s8 *, 0x3C69)  = temp_r0;
    return 1;
}
