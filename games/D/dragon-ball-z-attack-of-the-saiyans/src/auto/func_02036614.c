#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02044ad8(s32);                         /* extern */
s32 func_02044c50();                                /* extern */

s32 func_02036614(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02012a90(arg0, 1);
    if (func_02044c50() != 0) {
        return 1;
    }
    func_02044ad8(temp_r4);
    return 1;
}
