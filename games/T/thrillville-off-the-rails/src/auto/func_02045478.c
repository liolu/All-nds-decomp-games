#include "m2c.h"

s32 func_02045730();                                /* extern */
M2C_UNK func_0208df58(M2C_UNK, s32);                /* extern */
s32 func_0208ec34(s32, s32);                        /* extern */
s32 func_0208ee20(M2C_UNK, M2C_UNK);                /* extern */

void func_02045478(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r4;

    temp_r4 = func_02045730();
    func_0208df58(arg1, func_0208ec34(temp_r4, func_0208ee20(arg2, arg1)));
}
