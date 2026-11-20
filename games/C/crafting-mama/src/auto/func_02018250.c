#include "m2c.h"

M2C_UNK func_02017d8c();                            /* extern */
s32 func_02019d04();                                /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */

void func_02018250(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_02019d04();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02017d8c();
    func_02019d18(temp_r4);
}
