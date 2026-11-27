#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02044cb4(s32, s32);                    /* extern */

s32 func_02046970(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02012a90(arg0, 1);
    func_02044cb4(temp_r4 - 1, 1 << (func_02012a90(arg0, 2) - 1));
    return 1;
}
