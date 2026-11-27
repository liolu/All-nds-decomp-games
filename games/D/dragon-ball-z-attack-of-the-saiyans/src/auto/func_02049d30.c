#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02053a7c(s32);                             /* extern */
M2C_UNK func_0205587c(s32, s32);                    /* extern */

s32 func_02049d30(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_02012a90(arg0, 1);
    temp_r4 = func_02012a90(arg0, 2);
    if (func_02053a7c(temp_r5) == 0) {
        return 0;
    }
    func_0205587c(temp_r5, temp_r4);
    return 1;
}
