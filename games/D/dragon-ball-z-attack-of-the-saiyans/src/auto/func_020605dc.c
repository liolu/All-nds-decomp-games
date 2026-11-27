#include "m2c.h"

s32 func_02036e60(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
extern u8 data_020cc26c;
extern M2C_UNK data_020cc620;
extern M2C_UNK data_020cc8c8;

u32 func_020605dc(s32 arg0) {
    u32 temp_r0;

    temp_r0 = (u32) (data_020cc26c << 0x1A) >> 0x1F;
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (M2C_FIELD(&data_020cc620, s32 *, 0xB8) == 0) {
        M2C_FIELD(&data_020cc620, s32 *, 0xB8) =
            (s32) * ((M2C_UNK *) ((s8 *) &data_020cc8c8 + (func_02036e60(0x080E6003, 0, 0, 0) * 0xC)));
    }
    M2C_FIELD(&data_020cc620, s32 *, 0xAC) = (s32) (M2C_FIELD(&data_020cc620, s32 *, 0xAC) + arg0);
    return (u32) &data_020cc620;
}
