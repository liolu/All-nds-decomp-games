#include "m2c.h"

M2C_UNK func_020209cc();                            /* extern */
s32 func_02020db0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK func_02020a50;

s32 func_02020df8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 sp4;
    s32 temp_r0;

    temp_r0 = func_02020db0(arg0, arg1, arg2, &func_02020a50, &sp4);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020209cc();
    return sp4;
}
