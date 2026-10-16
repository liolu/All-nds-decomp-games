#include "m2c.h"

s32 func_02001040(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_02031a0c;

M2C_UNK *func_020010a8(M2C_UNK arg0) {
    M2C_UNK *var_r4;
    s32 temp_r0;

    var_r4  = &data_02031a0c;
    temp_r0 = func_02001040(&data_02031a0c, arg0);
    if (temp_r0 != 0) {
        var_r4 = temp_r0 + 0xC;
    }
    return var_r4;
}
