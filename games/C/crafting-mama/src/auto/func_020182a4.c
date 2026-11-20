#include "m2c.h"

M2C_UNK func_02017d8c();                            /* extern */
s32 func_02019d04();                                /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */

void func_020182a4(void) {
    s32 temp_r4;

    temp_r4 = func_02019d04();
    func_02017d8c();
    func_02019d18(temp_r4);
}
