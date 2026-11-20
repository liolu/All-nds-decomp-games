#include "m2c.h"

M2C_UNK func_020209cc();                            /* extern */
s32 func_02020ebc(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK func_02020a50;

s32 func_02020f44(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02020ebc(arg0, arg1, &func_02020a50, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020209cc();
    return sp0;
}
