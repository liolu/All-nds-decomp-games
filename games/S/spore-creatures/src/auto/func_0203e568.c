#include "m2c.h"

M2C_UNK func_0203e5a8();                            /* extern */
s32 func_02090e10(s16, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */

void func_0203e568(void *arg0, s16 arg1) {
    func_0203e5a8();
    if (arg1 == 0xFFFF) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = func_02090e10(arg1, 1, 0, 0);
}
