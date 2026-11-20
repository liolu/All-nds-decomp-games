#include "m2c.h"

M2C_UNK func_02022a08(M2C_UNK *);                   /* extern */
M2C_UNK func_02022a24(M2C_UNK *);                   /* extern */
s32 func_02022be0(M2C_UNK *, M2C_UNK);              /* extern */

s32 func_020b08c4(M2C_UNK arg0) {
    u8 sp0[84];
    s32 temp_r4;

    func_02022a08(sp0);
    temp_r4 = func_02022be0(sp0, arg0);
    func_02022a24(sp0);
    return temp_r4;
}
