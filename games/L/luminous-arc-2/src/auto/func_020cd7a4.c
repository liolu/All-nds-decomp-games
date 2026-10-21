#include "m2c.h"

s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
s32 func_020296d8(M2C_UNK);                         /* extern */

s32 func_020cd7a4(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_02006be0();
    temp_r4 = func_020296d8(arg0);
    func_02006bf4(temp_r5);
    return temp_r4;
}
