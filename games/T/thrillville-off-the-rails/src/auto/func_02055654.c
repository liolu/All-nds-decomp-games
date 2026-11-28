#include "m2c.h"

M2C_UNK func_020211c8(M2C_UNK, void *, M2C_UNK);    /* extern */
M2C_UNK func_0207432c();                            /* extern */

void func_02055654(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        return;
    }
    func_0207432c();
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    func_020211c8(0, arg0 + 0x1C, 0x20);
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
}
