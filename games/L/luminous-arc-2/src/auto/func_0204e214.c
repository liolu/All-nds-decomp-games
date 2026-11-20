#include "m2c.h"

M2C_UNK func_020cc3fc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020cf2a0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32); /* extern */

void func_0204e214(s32 arg0) {
    if (arg0 != 0) {
        func_020cf2a0(0x34, 0, 0xD0, 0xB0, 1, 0, 1, 0x1B0000, 0x1C0, 1);
        return;
    }
    func_020cc3fc(0x34, 1, 1);
}
