#include "m2c.h"

M2C_UNK func_0204a378(void *, M2C_UNK);             /* extern */
s32 func_0204eb40();                                /* extern */
M2C_UNK func_0204eb6c(void *);                      /* extern */

void func_02048de0(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        if (func_0204eb40() == 0) {
            return;
        }
        func_0204eb6c(arg0);
        return;
    }
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x1AEC) - 4) > 1U) {
        return;
    }
    func_0204a378(arg0, 0);
}
