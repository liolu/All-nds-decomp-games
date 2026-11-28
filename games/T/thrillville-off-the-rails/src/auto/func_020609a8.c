#include "m2c.h"

M2C_UNK func_020608a4(void *, M2C_UNK);             /* extern */

void func_020609a8(void *arg0) {
    s32 temp_r1;

    if (M2C_FIELD(arg0, u8 *, 0x12C) == 0) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x110);
    if (temp_r1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x110) = (s32) (temp_r1 - 1);
    }
    if (M2C_FIELD(arg0, s32 *, 0x110) != 0) {
        return;
    }
    func_020608a4(arg0, 0);
}
