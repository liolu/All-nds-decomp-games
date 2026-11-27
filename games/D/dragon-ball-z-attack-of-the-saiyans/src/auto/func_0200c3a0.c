#include "m2c.h"

s32 func_0200c96c(M2C_UNK, u16, s32);               /* extern */
s32 func_0200d174(M2C_UNK, u16 *);                  /* extern */

s32 func_0200c3a0(M2C_UNK arg0) {
    u16 sp0;
    s32 temp_r0;

    temp_r0 = func_0200d174(arg0, &sp0);
    if (temp_r0 == 0) {
        return 0;
    }
    return func_0200c96c(arg0, sp0, temp_r0);
}
