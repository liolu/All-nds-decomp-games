#include "m2c.h"

M2C_UNK func_020034b0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020055c4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02090dd4(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */

void func_02090e08(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02090dd4(0, M2C_FIELD(arg0, s32 *, 0x58), 0x1C, arg1, 0);
    func_020055c4(arg3, arg2);
    func_020034b0(arg3, 0, arg2);
}
