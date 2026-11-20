#include "m2c.h"

M2C_UNK func_020031b0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020055c4(s32, M2C_UNK);                /* extern */
M2C_UNK func_02090dd4(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */

void func_02090ff8(void *arg0, M2C_UNK arg1) {
    func_02090dd4(0, M2C_FIELD(arg0, s32 *, 0x58), 0x1C, arg1, 0);
    func_020055c4(M2C_FIELD(arg0, s32 *, 0x14), 0x800);
    func_020031b0(M2C_FIELD(arg0, s32 *, 0x14), 0, 0x800);
}
