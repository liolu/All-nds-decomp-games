#include "m2c.h"

M2C_UNK func_02006ee8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0203491c();                            /* extern */

void func_02067d8c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x5C) != 0) {
        func_0203491c();
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    }
    func_02006ee8(arg0 + 0x5C, 0, 0x18);
}
