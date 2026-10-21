#include "m2c.h"

M2C_UNK func_02001014(s32);                         /* extern */

void func_020cf884(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r2;
    s32 temp_r3;

    temp_r3 = arg3 - arg1;
    temp_r2 = arg2 - arg0;
    func_02001014(((temp_r2 * temp_r2) + (temp_r3 * temp_r3)) << 0xC);
}
