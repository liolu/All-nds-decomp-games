#include "m2c.h"

s32 func_0209312c(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_02095324(s32 *, s32, s32);             /* extern */

s32 func_020952e8(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 = func_0209312c(arg1 * arg2, 2, 4);
    func_02095324(arg0, arg1, arg2);
    return 1;
}
