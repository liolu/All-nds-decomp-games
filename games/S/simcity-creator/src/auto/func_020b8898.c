#include "m2c.h"

M2C_UNK func_02061c28(M2C_UNK *);                   /* extern */
M2C_UNK func_02061c34(M2C_UNK *);                   /* extern */
M2C_UNK func_02061fb4(M2C_UNK *, M2C_UNK, s32, M2C_UNK); /* extern */

void func_020b8898(s32 arg0, M2C_UNK arg1) {
    u8 sp0[12];

    func_02061c28(sp0);
    func_02061fb4(sp0, arg1, arg0 + 4, 0x64);
    func_02061c34(sp0);
}
