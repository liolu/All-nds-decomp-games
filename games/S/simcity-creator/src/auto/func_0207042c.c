#include "m2c.h"

M2C_UNK func_0206f324(s32, M2C_UNK, M2C_UNK, u16 *, u16 *); /* extern */
M2C_UNK func_02070bf0(void *, u16, u16);            /* extern */

void func_0207042c(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 sp6;
    u16 sp4;

    func_0206f324(M2C_FIELD(arg0, s32 *, 0x70), arg1, arg2, &sp6, &sp4);
    func_02070bf0(arg0, sp6, sp4);
}
