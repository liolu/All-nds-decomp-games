#include "m2c.h"

M2C_UNK func_0200bf0c();                            /* extern */
s32 func_0200c430(M2C_UNK *, s32 *);                /* extern */
extern M2C_UNK func_0200bf4c;

s32 func_0200c4dc(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0200c430(&func_0200bf4c, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0200bf0c();
    return sp0;
}
