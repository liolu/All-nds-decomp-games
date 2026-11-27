#include "m2c.h"

s32 func_020148bc(M2C_UNK, s32, M2C_UNK);           /* extern */
M2C_UNK func_020441f0(M2C_UNK, M2C_UNK);            /* extern */

s32 func_02044360(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_020148bc(arg0, 0x02360000, arg1);
    func_020441f0(2, arg0);
    return temp_r4;
}
