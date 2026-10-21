#include "m2c.h"

s32 func_0202abc8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0204e820(s32, M2C_UNK);                /* extern */

s32 func_020312a4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = func_0202abc8(arg0, arg2);
    if (temp_r0 == 0) {
        return 0;
    }
    func_0204e820(temp_r0, arg1);
    return temp_r0;
}
