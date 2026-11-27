#include "m2c.h"

M2C_UNK func_0205e640(M2C_UNK *);                   /* extern */
M2C_UNK func_0205e670(M2C_UNK *);                   /* extern */
M2C_UNK func_0205e6d0(M2C_UNK *, void *);           /* extern */
s32 func_0206053c(M2C_UNK *);                       /* extern */

void func_0203ee48(void *arg0) {
    u8 sp0[108];

    func_0205e640(sp0);
    func_0205e6d0(sp0, arg0);
    M2C_FIELD(arg0, s32 *, 0xA0) = func_0206053c(sp0);
    func_0205e670(sp0);
}
