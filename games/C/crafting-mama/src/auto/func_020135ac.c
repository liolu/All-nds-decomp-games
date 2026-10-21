#include "m2c.h"

M2C_UNK func_02015b90(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_02018b18(M2C_UNK, s32);                /* extern */
M2C_UNK func_02018b3c();                            /* extern */

void func_020135ac(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02018b18(arg2, (arg0 + 0x1F) & ~0x1F);
    func_02018b3c();
    func_02015b90(arg2, arg0, arg1);
}
