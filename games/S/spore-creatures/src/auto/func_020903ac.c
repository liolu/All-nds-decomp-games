#include "m2c.h"
M2C_UNK func_020900d0(s32 *, s32, M2C_UNK);
M2C_UNK func_0209046c(M2C_UNK *, s32, s32);
s32 func_020903ac(s32 arg0, M2C_UNK arg1) {
    s32 sp8;
    M2C_UNK sp4;
    volatile s32 sp0;
    func_020900d0(&sp8, arg0, arg1);
    if (sp8 == (arg0 + 4)) {
        return 0;
    }
    sp0 = sp8;
    func_0209046c(&sp4, arg0, sp8);
    return 1;
}
