#include "m2c.h"

M2C_UNK func_02012418(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020123ac(void *, s32, M2C_UNK);        /* extern */

void func_020824e4(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_020123ac(arg0 + 0x5C, M2C_FIELD(arg0, s32 *, 0xA4) + arg3, 0);
    func_02012418(arg0 + 0x5C, arg1, arg2);
}
