#include "m2c.h"

M2C_UNK func_020b4cdc();                            /* extern */
s32 func_020b6bd0();                                /* extern */
M2C_UNK func_020b6be4(s32);                         /* extern */

void func_020b52e8(void) {
    s32 temp_r4;

    temp_r4 = func_020b6bd0();
    func_020b4cdc();
    func_020b6be4(temp_r4);
}
