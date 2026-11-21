#include "m2c.h"

s32 func_02007bfc();                         /* extern */
M2C_UNK func_02097a78();      /* extern */

void func_020985cc(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r4;

    temp_r4 = func_02007bfc();
    func_02097a78(arg0 + temp_r4, arg1, func_02007bfc(arg1), arg2 - temp_r4);
}
