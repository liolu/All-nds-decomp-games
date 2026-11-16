#include "m2c.h"

M2C_UNK func_02083fb0();                            /* extern */
s32 func_02085130();                                /* extern */
M2C_UNK func_02085144(s32);                         /* extern */

void func_02084484(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_02085130();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02083fb0();
    func_02085144(temp_r4);
}
