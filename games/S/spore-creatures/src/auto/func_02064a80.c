#include "m2c.h"

M2C_UNK func_01ffba64(s32, s32, M2C_UNK);           /* extern */
s32 func_02064104();                                /* extern */

s32 func_02064a80(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_02064104();
    func_01ffba64(arg1 + temp_r0, arg0 + 0x24, 0x40);
    func_01ffba64(arg1 + (temp_r0 + 0x40), arg0 + 0x64, 1);
    return temp_r0 + 0x41;
}
