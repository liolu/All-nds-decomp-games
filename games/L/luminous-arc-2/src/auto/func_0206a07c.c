/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_0200766c(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_0216be68;
extern M2C_UNK data_0216d820;
extern M2C_UNK data_0216da24;

M2C_UNK *func_0206a07c(s32 arg0) {
    M2C_UNK *temp_r4;
    s32 var_r3;

    var_r3 = 0;
loop_1:
    if (arg0 == M2C_FIELD(((M2C_UNK *) ((s8 *) &data_0216be68 + (var_r3 * 4))), s32 *, 0x18B8)) {
        temp_r4 = (M2C_UNK *) ((s8 *) &data_0216da24 + (var_r3 << 6));
        func_0200766c(*((M2C_UNK *) ((s8 *) &data_0216d820 + (var_r3 * 4))), temp_r4, 0x20);
        return temp_r4;
    }
    var_r3 += 1;
    if (var_r3 >= 0x20) {
        return &data_0216da24;
    }
    goto loop_1;
}
