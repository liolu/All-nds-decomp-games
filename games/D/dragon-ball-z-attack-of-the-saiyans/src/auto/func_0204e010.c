#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0206376c(s32, s32);                    /* extern */

s32 func_0204e010(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02012a90(arg0, 1);
    func_0206376c(temp_r4, func_02012b7c(arg0, 2, 0));
    return 1;
}
