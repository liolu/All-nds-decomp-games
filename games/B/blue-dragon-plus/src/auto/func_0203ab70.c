#include "m2c.h"

s32 func_02038e10();                                /* extern */
M2C_UNK func_02038e24(s32);                         /* extern */
M2C_UNK func_0203ad24(M2C_UNK);                     /* extern */

void func_0203ab70(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_02038e10();
    func_0203ad24(arg1);
    func_02038e24(temp_r4);
}
