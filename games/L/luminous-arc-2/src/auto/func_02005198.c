#include "m2c.h"

M2C_UNK func_02004bdc();                            /* extern */
s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */

void func_02005198(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_02006be0();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02004bdc();
    func_02006bf4(temp_r4);
}
