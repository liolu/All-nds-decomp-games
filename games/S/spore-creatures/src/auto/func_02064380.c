#include "m2c.h"

M2C_UNK func_01ffba64(s32, s32, M2C_UNK);           /* extern */
s32 func_02064a80();                                /* extern */

s32 func_02064380(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_02064a80(arg0);
    func_01ffba64(arg1 + temp_r0, arg0 + 0x68, 2);
    func_01ffba64(arg1 + (temp_r0 + 2), arg0 + 0x6A, 8);
    func_01ffba64(arg1 + (temp_r0 + 0xA), arg0 + 0x72, 2);
    return temp_r0 + 0xC;
}
