#include "m2c.h"

M2C_UNK func_0200a314(M2C_UNK, s32, s32);           /* extern */
s32 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02013524(M2C_UNK *, s16, s16, M2C_UNK); /* extern */
extern M2C_UNK data_020cc620;
extern M2C_UNK data_020cc638;

s32 func_0204b110(M2C_UNK arg0) {
    s16 temp_r4;
    s16 temp_r5;
    s32 temp_r0;

    temp_r4 = (s16) func_02012b7c(arg0, 1, 0x100);
    temp_r5 = (s16) func_02012b7c(arg0, 2, 0xC0);
    temp_r0 = func_02012b7c(arg0, 3, 0);
    if (temp_r0 > 0) {
        M2C_FIELD(&data_020cc620, s16 *, 0x60) = temp_r4;
        M2C_FIELD(&data_020cc620, s16 *, 0x62) = temp_r5;
        M2C_FIELD(&data_020cc620, s16 *, 0x5A) = (s16) temp_r0;
    } else {
        M2C_FIELD(&data_020cc620, s32 *, 0x64) = (s32) (temp_r4 << 0xC);
        M2C_FIELD(&data_020cc620, s32 *, 0x68) = (s32) (temp_r5 << 0xC);
        M2C_FIELD(&data_020cc620, s32 *, 0x18) = (s32) M2C_FIELD(&data_020cc620, s32 *, 0x30);
        M2C_FIELD(&data_020cc620, s32 *, 0x30) = 0x0234E000;
        func_02013524(&data_020cc638, temp_r4, temp_r5, 0);
        M2C_FIELD(&data_020cc620, s32 *, 0x30) = (s32) M2C_FIELD(&data_020cc620, s32 *, 0x18);
        M2C_FIELD(&data_020cc620, s32 *, 0x18) = 0;
        func_0200a314(3, M2C_FIELD(&data_020cc620, s32 *, 0x3C) << 8, M2C_FIELD(&data_020cc620, s32 *, 0x40) << 8);
    }
    return 1;
}
