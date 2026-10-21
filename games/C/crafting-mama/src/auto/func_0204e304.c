#include "m2c.h"

M2C_UNK func_0204e24c();                            /* extern */
M2C_UNK func_0204e260(M2C_UNK);                     /* extern */

void func_0204e304(M2C_UNK arg0, s32 arg1) {
    if (arg1 & 1) {
        func_0204e24c();
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_0204e260(arg0);
}
