#include "m2c.h"

s32 func_02029170(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_020291a8(s32);                         /* extern */
s32 func_020322fc(u32, s32);                        /* extern */

u32 func_02032020(s32 arg0, s32 arg1) {
    s32 temp_r0_2;
    u32 temp_r0;
    u32 temp_r1;
    u32 temp_r5;

    temp_r0 = arg0 + arg1;
    temp_r5 = (arg0 + 3) & ~3;
    if (temp_r5 > temp_r0) {
        return 0U;
    }
    temp_r1 = temp_r0 - temp_r5;
    if (temp_r1 < 0x10U) {
        return 0U;
    }
    temp_r0_2 = func_02029170(temp_r5 + 0x10, temp_r1 - 0x10, 0);
    if (temp_r0_2 == 0) {
        return 0U;
    }
    if (func_020322fc(temp_r5, temp_r0_2) != 0) {
        return temp_r5;
    }
    func_020291a8(temp_r0_2);
    return 0U;
}
