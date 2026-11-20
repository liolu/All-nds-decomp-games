#include "m2c.h"

M2C_UNK func_020030ac(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0200332c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_02003464(M2C_UNK arg0, s32 arg1) {
    func_0200332c(arg0, 1, 0, 0x1F);
    if (arg1 != 0) {
        func_020030ac(arg0, 1, 0x10, 1, 0x1F);
        return;
    }
    func_020030ac(arg0, 1, -0x10, 1, 0x1F);
}
