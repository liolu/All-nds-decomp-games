#include "m2c.h"

M2C_UNK func_0201fc24();                            /* extern */
M2C_UNK func_0201fc38(M2C_UNK);                     /* extern */

void func_0201fcdc(M2C_UNK arg0, s32 arg1) {
    if (arg1 & 1) {
        func_0201fc24();
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_0201fc38(arg0);
}
