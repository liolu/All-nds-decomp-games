#include "m2c.h"

M2C_UNK func_0207432c();                            /* extern */

void func_0205513c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        return;
    }
    func_0207432c();
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}
