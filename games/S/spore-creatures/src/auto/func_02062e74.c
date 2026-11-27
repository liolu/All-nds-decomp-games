#include "m2c.h"

M2C_UNK func_020630a0(M2C_UNK, M2C_UNK);            /* extern */

void func_02062e74(M2C_UNK arg0, s32 arg1, s32 arg2) {
    if (arg1 == 0) {
        if (arg2 == 0) {
            func_020630a0(arg0, 0xD);
            return;
        }
        func_020630a0(arg0, 0xE);
        return;
    }
    func_020630a0(arg0, 0xE);
}
