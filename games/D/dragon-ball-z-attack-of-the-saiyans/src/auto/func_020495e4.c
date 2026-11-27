#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020cc620;

s32 func_020495e4(M2C_UNK arg0) {
    M2C_FIELD(&data_020cc620, s32 *, 0x8C) = (s32) (M2C_FIELD(&data_020cc620, s32 *, 0x8C) & ~func_02012a90(arg0, 1));
    return 1;
}
