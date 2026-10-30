#include "m2c.h"

M2C_UNK func_02061c28(M2C_UNK *);                   /* extern */
M2C_UNK func_02061c34(M2C_UNK *);                   /* extern */
M2C_UNK func_020621c0(M2C_UNK *, s32, M2C_UNK);     /* extern */

void func_02096da4(s32 arg0) {
    u8 sp0[12];

    func_02061c28(sp0);
    func_020621c0(sp0, arg0 + 0x17C4, 2);
    func_020621c0(sp0, arg0 + 0x1AE4, 2);
    func_02061c34(sp0);
}
