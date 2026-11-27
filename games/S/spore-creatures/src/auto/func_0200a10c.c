#include "m2c.h"

M2C_UNK func_0200a104(void *, s32);                 /* extern */

void func_0200a10c(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 != 2) {
        return;
    }
    if (arg2 == 0xFFFF) {
        return;
    }
    func_0200a104(arg0, arg2);
    M2C_FIELD(arg0, s8 *, 0x60) = 1;
}
