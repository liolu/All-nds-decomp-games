#include "m2c.h"

M2C_UNK func_0206bdac(M2C_UNK, u8 *, u8 *);         /* extern */
M2C_UNK func_0206f154(s32, u8, u8, M2C_UNK);        /* extern */
extern M2C_UNK data_0216e2f0;

void func_0206c41c(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp1;
    u8 sp0;

    sp0 = 1;
    func_0206bdac(arg0, &sp1, &sp0);
    func_0206f154((sp0 * 0x38) + (s32) &data_0216e2f0 + 0x10, sp1, sp0, arg1);
}
