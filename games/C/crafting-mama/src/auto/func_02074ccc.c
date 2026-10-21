#include "m2c.h"

M2C_UNK func_02064508(s32, M2C_UNK, M2C_UNK, s32);  /* extern */
s32 func_02074cbc();                                /* extern */

void func_02074ccc(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_02074cbc();
    if (arg0 >= 0xC) {
        return;
    }
    func_02064508(temp_r0, 1, 1, arg0);
}
