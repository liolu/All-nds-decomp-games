#include "m2c.h"

M2C_UNK func_02021258(void *, s32, M2C_UNK);        /* extern */

void func_02095368(void *arg0, void *arg1) {
    func_02021258(arg1, arg0 + 0x28, 0x30);
    func_02021258(arg0 + 0x28, M2C_FIELD(arg0, s32 *, 0x58) + 0x2C, 0x30);
}
