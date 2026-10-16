#include "m2c.h"

M2C_UNK func_020934bc(s32);
M2C_UNK func_020cfad0(void *, s32, M2C_UNK);

void func_020cfbbc(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    if (arg0 == NULL) {
        return;
    }
    if (arg3 != 0) {
        func_020cfad0(arg0, M2C_FIELD(arg0, s32 *, -4), arg1);
    }
    func_020934bc(arg0 - arg2);
}
