#include "m2c.h"

M2C_UNK func_0201f638(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0201f664(s32, s32);                    /* extern */
M2C_UNK func_0201f9cc(s32, M2C_UNK *);              /* extern */

void func_0201faec(s32 arg0, s32 arg1) {
    u8 sp0[8];
    s32 temp_r4;

    temp_r4 = arg1 - 0x10;
    func_0201f638(sp0, temp_r4);
    func_0201f664(arg0 + 0x2C, temp_r4);
    func_0201f9cc(arg0 + 0x24, sp0);
}
