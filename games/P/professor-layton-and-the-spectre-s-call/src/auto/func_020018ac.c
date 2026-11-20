#include "m2c.h"

M2C_UNK func_020017f4();                            /* extern */
M2C_UNK func_02001808(M2C_UNK);                     /* extern */

void func_020018ac(M2C_UNK arg0, s32 arg1) {
    if (arg1 & 1) {
        func_020017f4();
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_02001808(arg0);
}
