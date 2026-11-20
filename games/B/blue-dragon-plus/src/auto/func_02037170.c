#include "m2c.h"

M2C_UNK func_02036c98();                            /* extern */
s32 func_02038e10();                                /* extern */
M2C_UNK func_02038e24(s32);                         /* extern */

void func_02037170(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_02038e10();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02036c98();
    func_02038e24(temp_r4);
}
