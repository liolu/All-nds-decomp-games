#include "m2c.h"

u16 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_020cc620;

s32 func_0204b2cc(M2C_UNK arg0) {
    u16 temp_r0;

    temp_r0                                = func_02012b7c(arg0, 1, 0xF);
    M2C_FIELD(&data_020cc620, u8 *, 0x70)  = 0U;
    M2C_FIELD(&data_020cc620, u8 *, 0x71)  = 0U;
    M2C_FIELD(&data_020cc620, u8 *, 0x78)  = 0U;
    M2C_FIELD(&data_020cc620, u8 *, 0x79)  = 0U;
    M2C_FIELD(&data_020cc620, u16 *, 0x7C) = temp_r0;
    M2C_FIELD(&data_020cc620, u16 *, 0x7E) = temp_r0;
    if (M2C_FIELD(&data_020cc620, u16 *, 0x7E) == 0) {
        M2C_FIELD(&data_020cc620, s16 *, 0x6C) = (s16) (M2C_FIELD(&data_020cc620, u8 *, 0x70) << 8);
        M2C_FIELD(&data_020cc620, s16 *, 0x6E) = (s16) (M2C_FIELD(&data_020cc620, u8 *, 0x71) << 8);
        M2C_FIELD(&data_020cc620, s16 *, 0x74) = (s16) (M2C_FIELD(&data_020cc620, u8 *, 0x78) << 8);
        M2C_FIELD(&data_020cc620, s16 *, 0x76) = (s16) (M2C_FIELD(&data_020cc620, u8 *, 0x79) << 8);
    }
    return 1;
}
