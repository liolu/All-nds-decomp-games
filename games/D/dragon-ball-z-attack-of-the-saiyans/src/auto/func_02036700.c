#include "m2c.h"

M2C_UNK func_0200bb30(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02044c50();                                /* extern */

s32 func_02036700(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02012a90(arg0, 1);
    if (func_02044c50() != 0) {
        return 1;
    }
    func_0200bb30(temp_r4, 0x7F, 0x40);
    return 1;
}
