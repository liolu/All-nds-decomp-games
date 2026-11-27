/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern M2C_UNK data_020fb6e0;
extern M2C_UNK data_020fdb30;

void func_02015a3c(void) {
    s32 var_r3;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;

    if (M2C_FIELD(&data_020fb6e0, s32 *, 0) == 1) {
        temp_r0 = *((M2C_UNK *) ((s8 *) &data_020fdb30 + (M2C_FIELD(&data_020fb6e0, s32 *, 0x1C) * 4)));
        M2C_FIELD(temp_r0, s32 *, 0x12A0) = (s32) M2C_FIELD(temp_r0, s32 *, 0x129C);
        temp_r0_2 = *((M2C_UNK *) ((s8 *) &data_020fdb30 + (M2C_FIELD(&data_020fb6e0, s32 *, 0x1C) * 4)));
        M2C_FIELD(temp_r0_2, s32 *, 0x129C) = (s32) M2C_FIELD(temp_r0_2, s32 *, 0x1298);
        return;
    }
    var_r3 = 0;
    do {
        temp_r0_3                           = *((M2C_UNK *) ((s8 *) &data_020fdb30 + (var_r3 * 4)));
        M2C_FIELD(temp_r0_3, s32 *, 0x12A0) = (s32) M2C_FIELD(temp_r0_3, s32 *, 0x129C);
        temp_r0_4                           = *((M2C_UNK *) ((s8 *) &data_020fdb30 + (var_r3 * 4)));
        var_r3 += 1;
        M2C_FIELD(temp_r0_4, s32 *, 0x129C) = (s32) M2C_FIELD(temp_r0_4, s32 *, 0x1298);
    } while (var_r3 < 2);
}
