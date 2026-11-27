#include "m2c.h"

M2C_UNK func_0200d158(void *);                      /* extern */
s32 func_0202ec3c(s32);                             /* extern */
M2C_UNK func_02066fa4(M2C_UNK, M2C_UNK);            /* extern */

void func_0200ce08(void *arg0, s32 arg1) {
    if (func_0202ec3c((arg1 * 0x554) + (arg0 + 0xF8)) == 0) {
        return;
    }
    func_02066fa4(0x67, 0);
    M2C_FIELD(arg0, s32 *, 0xC0) = arg1;
    func_0200d158(arg0);
}
