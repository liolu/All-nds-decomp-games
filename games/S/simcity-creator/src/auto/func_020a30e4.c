#include "m2c.h"

M2C_UNK func_02061c28(M2C_UNK *);                   /* extern */
M2C_UNK func_02061c34(M2C_UNK *);                   /* extern */
M2C_UNK func_02062288(M2C_UNK *, s32);              /* extern */

s32 func_020a30e4(void *arg0) {
    u8 sp0[12];

    func_02061c28(sp0);
    func_02062288(sp0, M2C_FIELD(arg0, s32 *, 0x1C));
    func_02061c34(sp0);
    return 1;
}
