#include "m2c.h"

M2C_UNK func_02018b18(s32, M2C_UNK);                /* extern */
s32 func_02057298(M2C_UNK, M2C_UNK, s32, M2C_UNK);  /* extern */

s32 func_0205a7f4(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    if (arg2 == 0) {
        return 0;
    }
    func_02018b18(arg2, arg3);
    if (func_02057298(arg0, arg1, arg2, arg3) != 0) {
        return 1;
    }
    return 0;
}
