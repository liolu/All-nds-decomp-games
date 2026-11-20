#include "m2c.h"

M2C_UNK func_0203f2c8();                            /* extern */
s32 func_0203f6cc(M2C_UNK, M2C_UNK *, s32 *);       /* extern */
extern M2C_UNK func_0203f308;

s32 func_0203f720(M2C_UNK arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0203f6cc(arg0, &func_0203f308, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0203f2c8();
    return sp0;
}
