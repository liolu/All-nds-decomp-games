#include "m2c.h"

M2C_UNK func_02021d80(M2C_UNK, s32);                /* extern */
s32 func_020348ec(s32);                             /* extern */
M2C_UNK func_0203491c(s32);                         /* extern */
M2C_UNK func_02061c28(M2C_UNK *);                   /* extern */
M2C_UNK func_02061c34(M2C_UNK *);                   /* extern */
s32 func_02061f38(M2C_UNK *, s32, M2C_UNK, s32);    /* extern */

void func_02021d14(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[12];
    s32 temp_r0;

    func_02061c28(sp0);
    temp_r0 = func_020348ec(0x3E0C8);
    if (func_02061f38(sp0, temp_r0, arg1, 0x3E0C8) != 0) {
        func_02021d80(arg0, temp_r0);
    }
    func_0203491c(temp_r0);
    func_02061c34(sp0);
}
