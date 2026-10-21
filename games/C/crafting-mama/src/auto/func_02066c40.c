#include "m2c.h"

s32 func_0206695c(M2C_UNK, M2C_UNK, s32 *, s32 *);  /* extern */
s32 func_02066b0c(s32, M2C_UNK, s32, s32);          /* extern */

s32 func_02066c40(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 sp4;
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0206695c(arg0, arg1, &sp4, &sp0);
    if (temp_r0 == 0) {
        return 0;
    }
    return func_02066b0c(arg3 + sp4, arg2, sp0, temp_r0);
}
