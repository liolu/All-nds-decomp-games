#include "m2c.h"

s32 func_02007bfc(M2C_UNK);                         /* extern */
M2C_UNK func_0209563c(s32 *, M2C_UNK, s32);         /* extern */
M2C_UNK func_020959ec();                            /* extern */

void func_0209665c(s32 *arg0, s32 *arg1, M2C_UNK arg2) {
    *arg0 = *arg1;
    func_020959ec(arg0, arg1);
    func_0209563c(arg0, arg2, func_02007bfc(arg2));
}
