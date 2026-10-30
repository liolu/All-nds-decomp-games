#include "m2c.h"

M2C_UNK func_02006f7c(s32, void *, M2C_UNK);        /* extern */

s32 func_0204623c(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        M2C_FIELD(arg0, s8 *, 0x23) = 0;
        return 0;
    }
    func_02006f7c(arg1, arg0 + 0x23, 0x1E);
    M2C_FIELD(arg0, s8 *, 0x41) = 0;
    return 1;
}
