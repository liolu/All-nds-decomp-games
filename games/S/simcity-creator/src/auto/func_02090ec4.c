#include "m2c.h"

M2C_UNK func_020036f0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020055c4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02090f08(M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */

void func_02090ec4(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02090f08(0, M2C_FIELD(arg0, s32 *, 0x58), 0x1F, arg1);
    func_020055c4(arg3, arg2);
    func_020036f0(arg3, 0, arg2);
}
