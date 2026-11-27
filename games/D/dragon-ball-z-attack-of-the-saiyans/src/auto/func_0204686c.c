#include "m2c.h"

s32 func_02012a90(s32, M2C_UNK);                    /* extern */

s32 func_0204686c(s32 arg0) {
    s32 temp_r4;

    temp_r4                                        = func_02012a90(arg0, 1);
    M2C_FIELD((arg0 + (temp_r4 * 4)), s32 *, 0x28) = func_02012a90(arg0, 2);
    return 1;
}
