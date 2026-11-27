#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s8 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);        /* extern */
s32 func_02012c10(M2C_UNK, s32);                    /* extern */
extern s32 data_020d1d24;

s32 func_020485d4(M2C_UNK arg0) {
    s32 sp4;
    s32 sp0;
    s16 temp_r7;
    s16 temp_r8;
    s16 temp_r9;
    s32 temp_r11;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s8 temp_r0;

    temp_r6                                             = func_02012a90(arg0, 1);
    temp_r5                                             = func_02012a90(arg0, 2);
    temp_r4                                             = func_02012a90(arg0, 3);
    temp_r11                                            = func_02012c10(arg0, func_02012a90(arg0, 4));
    sp0                                                 = func_02012c10(arg0, func_02012a90(arg0, 5));
    sp4                                                 = func_02012a90(arg0, 6);
    temp_r7                                             = (s16) func_02012a90(arg0, 7);
    temp_r8                                             = (s16) func_02012a90(arg0, 8);
    temp_r9                                             = (s16) func_02012a90(arg0, 9);
    temp_r0                                             = func_02012b7c(arg0, 0xA, 8);
    temp_r3                                             = temp_r6 * 0x14;
    M2C_FIELD((data_020d1d24 + temp_r3), s8 *, 0x434C)  = 1;
    M2C_FIELD((data_020d1d24 + temp_r3), s16 *, 0x4350) = (s16) temp_r5;
    M2C_FIELD((data_020d1d24 + temp_r3), s16 *, 0x4352) = (s16) temp_r4;
    M2C_FIELD((data_020d1d24 + temp_r3), s8 *, 0x434D)  = temp_r0;
    M2C_FIELD((data_020d1d24 + temp_r3), s32 *, 0x4354) = temp_r11;
    M2C_FIELD((data_020d1d24 + temp_r3), s32 *, 0x4358) = sp0;
    M2C_FIELD((data_020d1d24 + temp_r3), s8 *, 0x434E)  = (s8) sp4;
    M2C_FIELD((data_020d1d24 + temp_r3), s16 *, 0x435C) = temp_r7;
    M2C_FIELD((data_020d1d24 + temp_r3), s16 *, 0x435E) = temp_r8;
    M2C_FIELD((data_020d1d24 + temp_r3), s8 *, 0x434F)  = (s8) temp_r9;
    return 1;
}
