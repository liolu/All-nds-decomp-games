#include "m2c.h"

u8 func_02012a90(M2C_UNK, M2C_UNK);                 /* extern */
extern M2C_UNK data_020cc620;

s32 func_0204b208(M2C_UNK arg0) {
    u8 temp_r0;
    u8 temp_r4;
    u8 temp_r5;
    u8 temp_r6;
    u8 temp_r7;
    u8 temp_r8;

    temp_r8                                = func_02012a90(arg0, 1);
    temp_r7                                = func_02012a90(arg0, 2);
    temp_r6                                = func_02012a90(arg0, 3);
    temp_r5                                = func_02012a90(arg0, 4);
    temp_r4                                = func_02012a90(arg0, 5);
    temp_r0                                = func_02012a90(arg0, 6);
    M2C_FIELD(&data_020cc620, u8 *, 0x70)  = temp_r8;
    M2C_FIELD(&data_020cc620, u8 *, 0x71)  = temp_r7;
    M2C_FIELD(&data_020cc620, u8 *, 0x78)  = temp_r6;
    M2C_FIELD(&data_020cc620, u8 *, 0x79)  = temp_r5;
    M2C_FIELD(&data_020cc620, s16 *, 0x7C) = (s16) temp_r4;
    M2C_FIELD(&data_020cc620, u16 *, 0x7E) = (u16) temp_r0;
    if (M2C_FIELD(&data_020cc620, u16 *, 0x7E) == 0) {
        M2C_FIELD(&data_020cc620, s16 *, 0x6C) = (s16) (M2C_FIELD(&data_020cc620, u8 *, 0x70) << 8);
        M2C_FIELD(&data_020cc620, s16 *, 0x6E) = (s16) (M2C_FIELD(&data_020cc620, u8 *, 0x71) << 8);
        M2C_FIELD(&data_020cc620, s16 *, 0x74) = (s16) (M2C_FIELD(&data_020cc620, u8 *, 0x78) << 8);
        M2C_FIELD(&data_020cc620, s16 *, 0x76) = (s16) (M2C_FIELD(&data_020cc620, u8 *, 0x79) << 8);
    }
    return 1;
}
