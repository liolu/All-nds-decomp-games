#include "m2c.h"

M2C_UNK func_020033f0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020055c4(s32, M2C_UNK);                /* extern */
M2C_UNK func_02090f08(M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */

void func_0209107c(void *arg0, M2C_UNK arg1) {
    func_02090f08(0, M2C_FIELD(arg0, s32 *, 0x58), 0x1F, arg1);
    func_020055c4(M2C_FIELD(arg0, s32 *, 0x20), 0x800);
    func_020033f0(M2C_FIELD(arg0, s32 *, 0x20), 0, 0x800);
}
