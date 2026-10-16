#include "m2c.h"

M2C_UNK func_020b4cdc();                            /* extern */
s32 func_020b6bd0();                                /* extern */
M2C_UNK func_020b6be4(s32);                         /* extern */

void func_020b5298(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_020b6bd0();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_020b4cdc();
    func_020b6be4(temp_r4);
}
