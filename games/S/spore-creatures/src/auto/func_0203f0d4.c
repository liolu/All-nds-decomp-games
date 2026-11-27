#include "m2c.h"

M2C_UNK func_0203f11c();                            /* extern */
s32 func_02090e10(u16, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */

void func_0203f0d4(void *arg0, u16 arg1) {
    func_0203f11c();
    if ((arg1 != 0xFFFF) && (arg1 != M2C_FIELD(arg0, u16 *, 4))) {
        M2C_FIELD(arg0, u16 *, 4) = arg1;
        M2C_FIELD(arg0, s32 *, 0) = func_02090e10(arg1, 1, 0, 0);
    }
}
