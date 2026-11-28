#include "m2c.h"

M2C_UNK func_0202e100(M2C_UNK *);                   /* extern */
M2C_UNK func_0202e1c8(M2C_UNK *);                   /* extern */
M2C_UNK func_020bc5b0(s32, M2C_UNK *, M2C_UNK);     /* extern */

void func_020bc57c(void *arg0) {
    M2C_UNK sp0;

    func_0202e1c8(&sp0);
    func_020bc5b0(M2C_FIELD(arg0, s32 *, 0x28), &sp0, 0);
    func_0202e100(&sp0);
}
