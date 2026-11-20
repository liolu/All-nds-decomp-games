#include "m2c.h"

M2C_UNK func_02062e80();                            /* extern */
s32 func_02064a3c();                                /* extern */
M2C_UNK func_02064a50(s32);                         /* extern */

void func_02063354(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_02064a3c();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02062e80();
    func_02064a50(temp_r4);
}
