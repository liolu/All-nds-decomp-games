#include "m2c.h"

M2C_UNK func_02006f7c(s32, void *, M2C_UNK);        /* extern */

s32 func_020461f4(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        M2C_FIELD(arg0, s8 *, 4) = 0;
        return 0;
    }
    func_02006f7c(arg1, arg0 + 4, 0x1E);
    M2C_FIELD(arg0, s8 *, 0x22) = 0;
    return 1;
}
