#include "m2c.h"

M2C_UNK func_020dba9c(M2C_UNK *);                   /* extern */
M2C_UNK func_020dbb48(M2C_UNK *);                   /* extern */
s32 func_020dc330(M2C_UNK *, M2C_UNK *);            /* extern */

s32 func_020a8820(void) {
    u8 spC[16];
    u8 sp0[12];

    func_020dba9c(spC);
    func_020dbb48(sp0);
    return func_020dc330(spC, sp0) + 0x386D4380;
}
