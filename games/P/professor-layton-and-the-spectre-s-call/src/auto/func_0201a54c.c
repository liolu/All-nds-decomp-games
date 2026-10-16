#include "m2c.h"

M2C_UNK func_0201a084();                            /* extern */
s32 func_0201a4e8(M2C_UNK, M2C_UNK *, s32 *);       /* extern */
extern M2C_UNK func_0201a108;

s32 func_0201a54c(M2C_UNK arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0201a4e8(arg0, &func_0201a108, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0201a084();
    return sp0;
}
