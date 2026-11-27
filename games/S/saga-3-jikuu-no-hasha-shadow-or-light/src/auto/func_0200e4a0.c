#include "m2c.h"

M2C_UNK func_0200e128(s32);
M2C_UNK func_0200e3b4(void *, s32, M2C_UNK);

void func_0200e4a0(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    if (arg0 == NULL) {
        return;
    }
    if (arg3 != 0) {
        func_0200e3b4(arg0, M2C_FIELD(arg0, s32 *, -4), arg1);
    }
    func_0200e128(arg0 - arg2);
}
