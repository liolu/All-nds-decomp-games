#include "m2c.h"

M2C_UNK func_02002320();                            /* extern */
M2C_UNK func_0200234c();                            /* extern */
s32 func_02090e10(u16, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */

s32 func_020022cc(void *arg0, u16 arg1) {
    if (arg1 == 0xFFFF) {
        func_0200234c();
        return;
    }
    if (arg1 == M2C_FIELD(arg0, u16 *, 8)) {
        return;
    }
    func_02002320();
    M2C_FIELD(arg0, u16 *, 8)        = arg1;
    return M2C_FIELD(arg0, s32 *, 4) = func_02090e10(arg1, 1, 0, 0);
}
