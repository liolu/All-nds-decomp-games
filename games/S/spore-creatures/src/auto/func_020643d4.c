#include "m2c.h"

M2C_UNK func_01ffba64(s32, s32, M2C_UNK);           /* extern */
s32 func_02064ac0();                                /* extern */

s32 func_020643d4(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_02064ac0(arg0, arg1);
    func_01ffba64(arg0 + 0x68, arg1 + temp_r0, 2);
    func_01ffba64(arg0 + 0x6A, arg1 + (temp_r0 + 2), 8);
    func_01ffba64(arg0 + 0x72, arg1 + (temp_r0 + 0xA), 2);
    return temp_r0 + 0xC;
}
