#include "m2c.h"

M2C_UNK func_02047c64(s32);
M2C_UNK func_02076068(void *, s32, M2C_UNK);

void func_02076154(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    if (arg0 == NULL) {
        return;
    }
    if (arg3 != 0) {
        func_02076068(arg0, M2C_FIELD(arg0, s32 *, -4), arg1);
    }
    func_02047c64(arg0 - arg2);
}
