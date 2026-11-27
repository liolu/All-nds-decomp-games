#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02055ab4();                                /* extern */
s32 func_02060b30(s32);                             /* extern */

s32 func_0204ab0c(M2C_UNK arg0, s32 *arg1) {
    s32 temp_r4;

    temp_r4 = func_02012a90(arg0, 1);
    if (func_02055ab4() == 0xD) {
        return 0;
    }
    if (func_02060b30(temp_r4) > 0) {
        *arg1 = 1;
    }
    return 1;
}
