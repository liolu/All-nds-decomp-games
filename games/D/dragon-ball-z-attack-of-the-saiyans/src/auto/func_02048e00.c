#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0204fc08(s32, s32);                    /* extern */

s32 func_02048e00(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02012a90(arg0, 1);
    func_0204fc08(temp_r4, func_02012b7c(arg0, 2, 1));
    return 1;
}
