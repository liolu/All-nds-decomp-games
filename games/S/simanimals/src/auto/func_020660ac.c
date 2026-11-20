#include "m2c.h"

s32 func_02064a3c();                                /* extern */
M2C_UNK func_02064a50(s32);                         /* extern */
M2C_UNK func_02066230(M2C_UNK);                     /* extern */

void func_020660ac(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_02064a3c();
    func_02066230(arg1);
    func_02064a50(temp_r4);
}
