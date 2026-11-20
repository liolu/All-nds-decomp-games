#include "m2c.h"

M2C_UNK func_020298bc(M2C_UNK);                     /* extern */

void func_02029cf4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        return;
    }
    func_020298bc(0);
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
}
