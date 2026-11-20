#include "m2c.h"

M2C_UNK func_02022a08(M2C_UNK *);                   /* extern */
M2C_UNK func_02022a24(M2C_UNK *);                   /* extern */
M2C_UNK func_02022f1c(M2C_UNK *);                   /* extern */
M2C_UNK func_02022f30(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020b7864(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_0206b92c(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    u8 sp0[84];

    func_02022a08(sp0);
    func_02022f30(sp0, arg3);
    *M2C_FIELD(arg0, s32 **, 0xB8) = arg3;
    func_020b7864(M2C_FIELD(arg0, s32 *, 0xB0), arg1, arg2);
    func_02022f1c(sp0);
    func_02022a24(sp0);
}
