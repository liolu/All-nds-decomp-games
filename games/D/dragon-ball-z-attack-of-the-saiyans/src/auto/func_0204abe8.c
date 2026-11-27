#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0203954c(s32, s32);                    /* extern */
s32 func_02055ab4(s32);                             /* extern */

s32 func_0204abe8(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_02012a90(arg0, 1);
    temp_r4 = func_02012a90(arg0, 2);
    if (func_02055ab4(temp_r5) == 0xD) {
        return 0;
    }
    func_0203954c(temp_r4, temp_r5);
    return 1;
}
