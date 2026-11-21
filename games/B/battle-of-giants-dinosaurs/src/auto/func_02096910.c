#include "m2c.h"

M2C_UNK func_020959ec();                            /* extern */
M2C_UNK func_02095f9c(s32 *, M2C_UNK);              /* extern */

void func_02096910(s32 *arg0, s32 *arg1, M2C_UNK arg2) {
    *arg0 = *arg1;
    func_020959ec(arg0, arg1);
    func_02095f9c(arg0, arg2);
}
