#include "m2c.h"

M2C_UNK func_020dad60();                            /* extern */
s32 func_020db284(M2C_UNK *, s32 *);                /* extern */
extern M2C_UNK func_020dada0;

s32 func_020db330(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_020db284(&func_020dada0, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020dad60();
    return sp0;
}
