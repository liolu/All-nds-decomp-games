#include "m2c.h"

M2C_UNK func_020bc0b0();                            /* extern */
s32 func_020bc54c(M2C_UNK *, s32 *);                /* extern */
extern M2C_UNK func_020bc0f0;

s32 func_020bc5f8(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_020bc54c(&func_020bc0f0, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020bc0b0();
    return sp0;
}
