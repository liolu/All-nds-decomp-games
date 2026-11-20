#include "m2c.h"

s32 func_02019d04();                                /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */
M2C_UNK func_0201f528(M2C_UNK);                     /* extern */

void func_0201f398(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_02019d04();
    func_0201f528(arg1);
    func_02019d18(temp_r4);
}
