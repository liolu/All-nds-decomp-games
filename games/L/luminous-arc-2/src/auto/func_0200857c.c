#include "m2c.h"

s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
M2C_UNK func_02008730(M2C_UNK);                     /* extern */

void func_0200857c(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_02006be0();
    func_02008730(arg1);
    func_02006bf4(temp_r4);
}
