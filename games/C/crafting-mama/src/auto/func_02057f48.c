#include "m2c.h"

M2C_UNK func_020574c4();                            /* extern */

void func_02057f48(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x4C) == 0) {
        return;
    }
    func_020574c4();
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
}
