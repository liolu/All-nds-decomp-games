#include "m2c.h"

M2C_UNK func_020b5ba4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020b6fd0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020b70c0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_02093374(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    func_020b5ba4(arg1, arg3);
    if (arg4 == 0x20) {
        func_020b6fd0(arg0, arg1, arg2, arg3);
        return;
    }
    func_020b70c0(arg0, arg1, arg2, arg3);
}
