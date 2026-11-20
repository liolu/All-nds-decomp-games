#include "m2c.h"

M2C_UNK func_0202d290(s32);                         /* extern */
M2C_UNK func_02072c1c(s32);                         /* extern */
M2C_UNK func_02072c40(s32);                         /* extern */

void func_0207d0f4(s32 arg0, s32 arg1) {
    s32 temp_r4;
    s32 var_r5;

    temp_r4 = arg0 * arg1;
    if (temp_r4 < 0) {
        var_r5 = 0 - temp_r4;
    } else {
        var_r5 = temp_r4;
    }
    func_0202d290(temp_r4);
    if (arg1 >= 0) {
        func_02072c1c(temp_r4);
        return;
    }
    func_02072c40(var_r5);
}
