#include "m2c.h"

M2C_UNK func_0207ebc8();                            /* extern */

void func_0200fcd4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0207ebc8();
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg3;
}
