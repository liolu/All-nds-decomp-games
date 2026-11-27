#include "m2c.h"

M2C_UNK func_020641d0();                    /* extern */
s32 func_020641d8();                                /* extern */
M2C_UNK func_020642e0();                    /* extern */
s32 func_0206451c();                             /* extern */

void func_02064830(s32 arg0) {
    s32 temp_r4;
    s32 temp_r4_2;

    func_0206451c();
    temp_r4 = func_020641d8();
    func_020641d0(func_0206451c(arg0), temp_r4 + 1);
    func_0206451c(arg0);
    temp_r4_2 = func_020641d8() & 7;
    func_020642e0(func_0206451c(arg0), (temp_r4_2 * 0x1C) + (arg0 + 0x484));
}
