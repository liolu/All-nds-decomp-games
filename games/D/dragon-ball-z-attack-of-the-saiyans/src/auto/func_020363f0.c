#include "m2c.h"

s8 func_02012a90(M2C_UNK, M2C_UNK);                 /* extern */
s8 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);        /* extern */
extern s32 data_020d1d24;

s32 func_020363f0(M2C_UNK arg0) {
    s32 temp_r1;
    s8 temp_r0;
    s8 temp_r4;
    s8 temp_r5;
    s8 temp_r6;
    s8 temp_r7;

    temp_r6                         = func_02012a90(arg0, 1);
    temp_r5                         = func_02012a90(arg0, 2);
    temp_r4                         = func_02012a90(arg0, 3);
    temp_r7                         = func_02012b7c(arg0, 4, 0);
    temp_r0                         = func_02012b7c(arg0, 5, 0x1E);
    temp_r1                         = (temp_r6 * 0xEC) + (data_020d1d24 + 0x634);
    M2C_FIELD(temp_r1, s8 *, 0x88)  = temp_r4;
    M2C_FIELD(temp_r1, s8 *, 0x89)  = temp_r5;
    M2C_FIELD(temp_r1, s8 *, 0x8B)  = temp_r0;
    M2C_FIELD(temp_r1, s16 *, 0x8C) = (s16) (0 - temp_r7);
    return 1;
}
