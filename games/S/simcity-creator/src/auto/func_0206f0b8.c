#include "m2c.h"

s32 func_02053808(M2C_UNK);                         /* extern */
s32 func_02053814(M2C_UNK);                         /* extern */
M2C_UNK func_020af540(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_0206f0b8(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_02053814(arg1);
    temp_r4 = func_02053808(arg1);
    func_020af540(temp_r5, 1, -0x10, 1);
    func_020af540(temp_r4, 1, -0x10, 1);
}
