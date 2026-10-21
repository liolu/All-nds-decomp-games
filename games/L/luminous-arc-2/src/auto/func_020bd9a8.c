#include "m2c.h"

M2C_UNK func_020bb54c();                            /* extern */

void func_020bd9a8(s32 arg0, void *arg1, s32 arg2) {
    M2C_FIELD(arg1, s8 *, 2) = 0x67;
    func_020bb54c(arg0, arg1, arg2);
}
