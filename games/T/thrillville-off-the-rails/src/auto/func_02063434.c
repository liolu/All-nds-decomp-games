#include "m2c.h"

M2C_UNK func_0207432c();                            /* extern */

void func_02063434(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        return;
    }
    func_0207432c();
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}
