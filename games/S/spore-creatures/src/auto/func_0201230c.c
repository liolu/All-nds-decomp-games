#include "m2c.h"

M2C_UNK func_02012358(M2C_UNK, s32);                /* extern */
M2C_UNK func_0201236c(M2C_UNK, s32);                /* extern */
M2C_UNK func_02012380(M2C_UNK, M2C_UNK);            /* extern */

void func_0201230c(M2C_UNK arg0, s32 arg1, M2C_UNK arg2) {
    func_02012380(arg0, arg2);
    func_02012358(arg0, arg1 + 0xDC);
    func_0201236c(arg0, arg1 + 0xC8);
}
