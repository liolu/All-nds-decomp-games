#include "m2c.h"

s32 func_02085130();                                /* extern */
M2C_UNK func_02085144(s32);                         /* extern */
M2C_UNK func_02086bf0(M2C_UNK);                     /* extern */

void func_02086a6c(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_02085130();
    func_02086bf0(arg1);
    func_02085144(temp_r4);
}
