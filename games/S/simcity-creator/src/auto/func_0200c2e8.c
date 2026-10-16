#include "m2c.h"

M2C_UNK func_0200bf0c();                            /* extern */
s32 func_0200c288(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK func_0200bf4c;

s32 func_0200c2e8(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0200c288(arg0, arg1, &func_0200bf4c, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0200bf0c();
    return sp0;
}
