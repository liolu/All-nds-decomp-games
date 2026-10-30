#include "m2c.h"

M2C_UNK func_02061c28(M2C_UNK *);                   /* extern */
M2C_UNK func_02061c34(M2C_UNK *);                   /* extern */
M2C_UNK func_02061fb4(M2C_UNK *, M2C_UNK, M2C_UNK, u16); /* extern */

s32 func_02097558(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, u16 arg4) {
    u8 sp0[12];

    func_02061c28(sp0);
    func_02061fb4(sp0, arg2, arg3, arg4);
    func_02061c34(sp0);
    return 1;
}
