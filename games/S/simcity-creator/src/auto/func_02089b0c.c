#include "m2c.h"

M2C_UNK func_02019388(s32, s32);                    /* extern */
s32 func_020198f8(s32);                             /* extern */
M2C_UNK func_02089a5c(M2C_UNK, s32 *, s32 *);       /* extern */

void func_02089b0c(M2C_UNK arg0) {
    s32 sp4;
    s32 sp0;
    s32 temp_r4;

    func_02089a5c(arg0, &sp0, &sp4);
    temp_r4 = func_020198f8(sp4);
    func_02019388(temp_r4, func_020198f8(sp0));
}
