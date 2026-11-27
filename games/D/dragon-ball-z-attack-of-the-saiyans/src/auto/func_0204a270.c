#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
void *func_02053a7c(u8);                            /* extern */
extern M2C_UNK data_020cc620;

s32 func_0204a270(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = func_02012a90(arg0, 1);
    temp_r4 = func_02012a90(arg0, 2);
    temp_r0 = func_02053a7c(M2C_FIELD(&data_020cc620, u8 *, 0xB41));
    if (temp_r0 == NULL) {
        return 0;
    }
    if ((M2C_FIELD(temp_r0, u16 *, 0x28) == temp_r5) && (M2C_FIELD(&data_020cc620, u8 *, 0xB48) == temp_r4) &&
        (M2C_FIELD(&data_020cc620, u8 *, 0xB49) == 0)) {
        return 1;
    }
    return 0;
}
