#include "m2c.h"

M2C_UNK func_02064250(s32);                         /* extern */
M2C_UNK func_02064258(s32);                         /* extern */

void func_020649bc(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = arg1 * 0x1C;
    temp_r5 = arg0 + 0x484;
    func_02064258(temp_r5 + temp_r4);
    func_02064258(arg3);
    func_02064250(arg3);
    func_02064250(temp_r5 + temp_r4);
}
