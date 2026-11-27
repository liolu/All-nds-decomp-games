#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02053a7c();                                /* extern */
s32 func_02055ab4(s32);                             /* extern */

s32 func_02049c64(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02012a90(arg0, 1);
    if (func_02053a7c() == 0) {
        return 0;
    }
    return func_02055ab4(temp_r4);
}
