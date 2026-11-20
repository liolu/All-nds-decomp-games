#include "m2c.h"

s32 func_02058108();                                /* extern */
s32 func_02058154(M2C_UNK, M2C_UNK);                /* extern */

s32 func_020580d0(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_02058108();
    if (temp_r0 == 0) {
        return 0;
    }
    if (temp_r0 == func_02058154(arg0, arg1)) {
        return 1;
    }
    return 0;
}
