#include "m2c.h"

M2C_UNK func_0201a084();                            /* extern */
s32 func_0201a468(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK func_0201a108;

s32 func_0201a4b0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 sp4;
    s32 temp_r0;

    temp_r0 = func_0201a468(arg0, arg1, arg2, &func_0201a108, &sp4);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0201a084();
    return sp4;
}
