#include "m2c.h"

M2C_UNK func_0209318c(s32);                         /* extern */
s32 func_020b6bd0();                                /* extern */
M2C_UNK func_020b6be4(s32);                         /* extern */

void func_0206277c(s32 arg0, s32 arg1) {
    s32 temp_r4;

    if (arg1 == 0) {
        return;
    }
    temp_r4 = func_020b6bd0();
    func_0209318c(arg1);
    func_020b6be4(temp_r4);
}
