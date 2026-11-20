#include "m2c.h"

M2C_UNK func_02086c38(M2C_UNK *, void *, s32 *, void **); /* extern */

s32 func_02086ac4(void *arg0) {
    void *sp8;
    s32 sp4;
    M2C_UNK sp0;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    sp8     = arg0 + 8;
    sp4     = M2C_FIELD(arg0, s32 *, 0xC);
    func_02086c38(&sp0, arg0 + 4, &sp4, &sp8);
    return temp_r4;
}
