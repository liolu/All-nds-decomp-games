#include "m2c.h"

M2C_UNK func_020297dc();                            /* extern */
M2C_UNK func_020297f0(M2C_UNK);                     /* extern */

void func_02029894(M2C_UNK arg0, s32 arg1) {
    if (arg1 & 1) {
        func_020297dc();
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_020297f0(arg0);
}
