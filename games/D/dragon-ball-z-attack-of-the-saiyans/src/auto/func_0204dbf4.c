#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020cc620;
extern M2C_UNK data_020cd148;

s32 func_0204dbf4(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_02012a90(arg0, 1);
    if (temp_r0 >= 8) {
        return M2C_FIELD(&data_020cc620, s32 *, 0xB20);
    }
    return (s32) * ((u8 *) ((s8 *) &data_020cd148 + (temp_r0 * 8)));
}
