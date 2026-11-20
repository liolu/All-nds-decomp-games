#include "m2c.h"

M2C_UNK func_0200766c(M2C_UNK, s32 *, M2C_UNK);     /* extern */
s32 func_02091c1c();                                /* extern */

s32 func_02091bb8(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    if (func_02091c1c() == 0) {
        return 0;
    }
    func_0200766c(arg0, &sp4, 4);
    func_0200766c(arg1, &sp0, 4);
    if (sp4 & ~sp0) {
        return 1;
    }
    return 0;
}
