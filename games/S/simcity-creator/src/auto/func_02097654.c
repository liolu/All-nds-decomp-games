#include "m2c.h"

M2C_UNK func_02097634(M2C_UNK);                     /* extern */
M2C_UNK func_02097694();                            /* extern */
s32 func_02097760(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02097e18(M2C_UNK, M2C_UNK);            /* extern */

s32 func_02097654(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    func_02097694();
    temp_r0 = func_02097760(arg0, arg1);
    if (temp_r0 == 0) {
        func_02097e18(arg0, arg1);
    }
    func_02097634(arg0);
    return temp_r0;
}
