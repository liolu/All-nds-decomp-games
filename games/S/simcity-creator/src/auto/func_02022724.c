#include "m2c.h"

M2C_UNK func_02002f44(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02002f9c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020055c4(M2C_UNK, M2C_UNK);            /* extern */

void func_02022724(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_020055c4(arg1, arg3);
    if (M2C_FIELD(arg0, s32 *, 0x408) == 1) {
        func_02002f44(arg1, arg2, arg3);
        return;
    }
    func_02002f9c(arg1, arg2, arg3);
}
