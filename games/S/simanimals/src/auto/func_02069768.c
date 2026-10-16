#include "m2c.h"

M2C_UNK func_02069310();                            /* extern */
s32 func_02069714(M2C_UNK, M2C_UNK *, s32 *);       /* extern */
extern M2C_UNK func_02069350;

s32 func_02069768(M2C_UNK arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02069714(arg0, &func_02069350, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02069310();
    return sp0;
}
