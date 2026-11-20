#include "m2c.h"

M2C_UNK func_02086d14(M2C_UNK *, void *, s32 *, M2C_UNK); /* extern */

void func_02086a50(void *arg0, M2C_UNK arg1) {
    s32 sp4;
    M2C_UNK sp0;

    sp4 = M2C_FIELD(arg0, s32 *, 0xC);
    func_02086d14(&sp0, arg0 + 4, &sp4, arg1);
}
