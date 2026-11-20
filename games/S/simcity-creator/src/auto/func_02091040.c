#include "m2c.h"

M2C_UNK func_02003330(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020055c4(s32, M2C_UNK);                /* extern */
M2C_UNK func_02090e98(M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */

void func_02091040(void *arg0, M2C_UNK arg1) {
    func_02090e98(0, M2C_FIELD(arg0, s32 *, 0x58), 0x1E, arg1);
    func_020055c4(M2C_FIELD(arg0, s32 *, 0x1C), 0x800);
    func_02003330(M2C_FIELD(arg0, s32 *, 0x1C), 0, 0x800);
}
