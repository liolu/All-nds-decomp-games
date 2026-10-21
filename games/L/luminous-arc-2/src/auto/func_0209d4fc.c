#include "m2c.h"

M2C_UNK func_0200ddc8(M2C_UNK *);                   /* extern */
M2C_UNK func_0200de74(M2C_UNK *);                   /* extern */
s32 func_0200e65c(M2C_UNK *, M2C_UNK *);            /* extern */

s32 func_0209d4fc(void) {
    u8 spC[16];
    u8 sp0[12];

    func_0200ddc8(spC);
    func_0200de74(sp0);
    return func_0200e65c(spC, sp0) + 0x386D4380;
}
