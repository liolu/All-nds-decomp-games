#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02044490();                            /* extern */
extern M2C_UNK data_0209f7a8;
extern M2C_UNK data_0209f7c4;

u8 func_02048250(M2C_UNK arg0) {
    s32 temp_r4;
    s32 var_r0;

    temp_r4 = func_02012a90(arg0, 1);
    var_r0  = func_02012a90(arg0, 2);
    if (var_r0 == 0) {
        if (temp_r4 == 1) {
            var_r0 += 1;
        }
        var_r0 += 1;
    }
    if (var_r0 >= 0) {
        ((s8 *) &data_0209f7c4)[temp_r4] = (s8) var_r0;
        if (M2C_FIELD(&data_0209f7a8, u8 *, 0x1B) == temp_r4) {
            func_02044490();
        }
    }
    return ((s8 *) &data_0209f7c4)[temp_r4];
}
