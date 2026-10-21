#include "m2c.h"

M2C_UNK func_020017e0(s32, s16);                    /* extern */
extern u8 data_02158048;
extern M2C_UNK data_02175b4c;

void func_020c94fc(void) {
    u8 var_r4;

    var_r4 = 0;
    if (M2C_FIELD(&data_02175b4c, s16 *, 0x94) == -0x10) {
        var_r4 += 1;
    } else {
        M2C_FIELD(&data_02175b4c, s16 *, 0x94) = (s16) (M2C_FIELD(&data_02175b4c, s16 *, 0x94) - 1);
        func_020017e0(0x0400006C, M2C_FIELD(&data_02175b4c, s16 *, 0x94));
    }
    if (M2C_FIELD(&data_02175b4c, s16 *, 0x96) == -0x10) {
        var_r4 += 1;
    } else {
        M2C_FIELD(&data_02175b4c, s16 *, 0x96) = (s16) (M2C_FIELD(&data_02175b4c, s16 *, 0x96) - 1);
        func_020017e0(0x0400106C, M2C_FIELD(&data_02175b4c, s16 *, 0x96));
    }
    if (var_r4 != 2) {
        return;
    }
    data_02158048 += 1;
}
