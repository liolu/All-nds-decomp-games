#include "m2c.h"

M2C_UNK func_01ffba64(s32, s32, M2C_UNK);           /* extern */
s32 func_0206415c();                                /* extern */

s32 func_02064ac0(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_0206415c();
    func_01ffba64(arg0 + 0x24, arg1 + temp_r0, 0x40);
    func_01ffba64(arg0 + 0x64, arg1 + (temp_r0 + 0x40), 1);
    return temp_r0 + 0x41;
}
