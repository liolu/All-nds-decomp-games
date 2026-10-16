#include "m2c.h"

s32 func_020b6bd0();                                /* extern */
M2C_UNK func_020b6be4(s32);                         /* extern */
M2C_UNK func_020b8750(M2C_UNK);                     /* extern */

void func_020b859c(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_020b6bd0();
    func_020b8750(arg1);
    func_020b6be4(temp_r4);
}
