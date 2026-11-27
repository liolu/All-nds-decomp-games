#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0204345c(s32, s32, s32, M2C_UNK);      /* extern */

s32 func_0204e340(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_02012a90(arg0, 1);
    temp_r4 = func_02012a90(arg0, 2);
    func_0204345c(temp_r5, temp_r4, func_02012a90(arg0, 3), 0);
    return 1;
}
