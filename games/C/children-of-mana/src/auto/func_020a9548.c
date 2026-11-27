#include "m2c.h"

M2C_UNK func_020a94ec();                            /* extern */

void func_020a9548(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 8)   = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    func_020a94ec();
}
