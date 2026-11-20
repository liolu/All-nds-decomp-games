#include "m2c.h"

M2C_UNK func_02029130();                            /* extern */
M2C_UNK func_02029144(M2C_UNK);                     /* extern */

void func_020291e8(M2C_UNK arg0, s32 arg1) {
    if (arg1 & 1) {
        func_02029130();
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_02029144(arg0);
}
