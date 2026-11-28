#include "m2c.h"

s32 func_020565ec(M2C_UNK);                         /* extern */
M2C_UNK func_02056454(s32, M2C_UNK);                /* extern */

void func_02056430(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = func_020565ec(0x80);
    if (temp_r0 == 0) {
        return;
    }
    func_02056454(temp_r0, arg2);
}
