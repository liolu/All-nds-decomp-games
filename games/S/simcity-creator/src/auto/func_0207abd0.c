#include "m2c.h"

s32 func_0207039c();                                /* extern */
s32 func_020705d4(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_020734b0(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

s32 func_0207abd0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;

    if (func_0207039c() != 0) {
        return 0;
    }
    temp_r0 = func_020705d4(arg0, arg1, arg2);
    if ((temp_r0 != 7) && (temp_r0 != 3)) {
        return func_020734b0(arg0, arg1, arg2);
    }
    return 0;
}
