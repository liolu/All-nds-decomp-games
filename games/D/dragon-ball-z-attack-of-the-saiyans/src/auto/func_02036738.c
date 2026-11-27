#include "m2c.h"

M2C_UNK func_0200bb9c(s32, s32);                    /* extern */
s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_02044c50();                                /* extern */

s32 func_02036738(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_02012a90(arg0, 1);
    temp_r4 = func_02012b7c(arg0, 2, 0);
    if (func_02044c50() != 0) {
        return 1;
    }
    func_0200bb9c(temp_r5, temp_r4);
    return 1;
}
