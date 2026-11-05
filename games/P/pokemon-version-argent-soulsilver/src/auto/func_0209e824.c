#include "m2c.h"

M2C_UNK func_020d4a50(M2C_UNK, s32 *, M2C_UNK);       /* extern */
s32 func_0209e8a0();                          /* extern */

s32 func_0209e824(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 sp4;

    if (func_0209e8a0() == 0) {
        return 0;
    }
    func_020d4a50(arg0, &sp0, 4);
    func_020d4a50(arg1, &sp4, 4);
    if ((sp0 | sp4) == -2) {
        return 0;
    }
    if (sp0 & ~sp4) {
        return 1;
    }
    return 0;
}
