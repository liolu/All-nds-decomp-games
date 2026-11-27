#include "m2c.h"

M2C_UNK func_020931e4(s32, s32);                    /* extern */

void func_020a3690(void *arg0, s32 arg1, void *arg2) {
    if (M2C_FIELD(arg0, u16 *, 0x12) & 0x10) {
        return;
    }
    func_020931e4(arg1, (arg2 + M2C_FIELD(arg2, s32 *, 0x14)) - arg1);
    M2C_FIELD(arg0, u16 *, 0x12) = (u16) (M2C_FIELD(arg0, u16 *, 0x12) | 0x10);
}
