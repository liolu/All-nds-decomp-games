#include "m2c.h"

s32 func_0201b47c();                                /* extern */
M2C_UNK func_0201b498(M2C_UNK, s32);                /* extern */
s32 func_02082034();                                /* extern */

s32 func_020820e0(s32 arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r0;

    temp_r0 = func_02082034();
    if (temp_r0 == 0) {
        return 0;
    }
    if (func_0201b47c() >= arg3) {
        return 0;
    }
    func_0201b498(arg2, temp_r0);
    return 1;
}
