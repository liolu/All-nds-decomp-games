#include "m2c.h"

M2C_UNK func_020af194();                            /* extern */
M2C_UNK func_020af1a8(M2C_UNK);                     /* extern */

void func_020af24c(M2C_UNK arg0, s32 arg1) {
    if (arg1 & 1) {
        func_020af194();
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_020af1a8(arg0);
}
