#include "m2c.h"

M2C_UNK func_02019930();                            /* extern */
M2C_UNK func_02090bf0();                            /* extern */
s32 func_02090e10(u16, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */

void func_020198dc(void *arg0, u16 arg1) {
    if (arg1 == 0xFFFF) {
        func_02019930();
        return;
    }
    if (M2C_FIELD(arg0, u16 *, 4) != 0xFFFF) {
        func_02090bf0();
    }
    M2C_FIELD(arg0, u16 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = func_02090e10(arg1, 1, 0, 0);
}
