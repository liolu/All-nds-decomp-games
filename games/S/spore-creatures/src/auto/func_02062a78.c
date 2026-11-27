#include "m2c.h"

M2C_UNK func_02008414();                            /* extern */
M2C_UNK func_020630a0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_ov001_02100618();                          /* extern */

s32 func_02062a78(M2C_UNK arg0) {
    if (func_ov001_02100618() == 0) {
        do {
            func_02008414();
        } while (func_ov001_02100618() == 0);
    }
    func_020630a0(arg0, 3);
    return 1;
}
