#include "m2c.h"

M2C_UNK func_02066960();                            /* extern */

void func_020660c4(void *arg0, s32 arg1) {
    func_02066960();
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
}
