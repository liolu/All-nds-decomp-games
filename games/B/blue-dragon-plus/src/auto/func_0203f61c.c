#include "m2c.h"

M2C_UNK func_0203f2c8();                            /* extern */
s32 func_0203f5b0(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK func_0203f308;

s32 func_0203f61c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0203f5b0(arg0, arg1, &func_0203f308, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0203f2c8();
    return sp0;
}
