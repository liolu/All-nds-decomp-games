#include "m2c.h"

M2C_UNK func_020b56b4();                            /* extern */
M2C_UNK func_020b56c8(M2C_UNK);                     /* extern */

void func_020b576c(M2C_UNK arg0, s32 arg1) {
    if (arg1 & 1) {
        func_020b56b4();
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_020b56c8(arg0);
}
