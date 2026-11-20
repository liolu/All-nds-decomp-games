#include "m2c.h"

s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
s32 func_02025ed8(s32);                             /* extern */
s32 func_02026180(M2C_UNK);                         /* extern */
M2C_UNK func_020261a8(M2C_UNK, M2C_UNK);            /* extern */

void func_0202685c(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_02006be0();
    temp_r4 = func_02025ed8(arg1);
    if (arg0 == func_02026180(arg2)) {
        func_020261a8(arg2, 0);
    }
    func_02025ed8(temp_r4);
    func_02006bf4(temp_r5);
}
