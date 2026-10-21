#include "m2c.h"

M2C_UNK func_020290f0(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0202911c(s32, s32);                    /* extern */
M2C_UNK func_020294f8(s32, M2C_UNK *);              /* extern */

void func_0202965c(s32 arg0, s32 arg1) {
    u8 sp0[8];
    s32 temp_r4;

    temp_r4 = arg1 - 0x10;
    func_020290f0(sp0, temp_r4);
    func_0202911c(arg0 + 0x2C, temp_r4);
    func_020294f8(arg0 + 0x24, sp0);
}
