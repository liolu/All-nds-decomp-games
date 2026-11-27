#include "m2c.h"

M2C_UNK func_020a94ec();                            /* extern */

void func_020a9534(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    func_020a94ec();
}
