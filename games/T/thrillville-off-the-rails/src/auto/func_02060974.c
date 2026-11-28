#include "m2c.h"

M2C_UNK func_020608a4(void *, M2C_UNK);             /* extern */

void func_02060974(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x12C) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x110) = (s32) (M2C_FIELD(arg0, s32 *, 0x110) + 1);
    if (M2C_FIELD(arg0, u8 *, 0x114) != 0) {
        return;
    }
    func_020608a4(arg0, 1);
}
