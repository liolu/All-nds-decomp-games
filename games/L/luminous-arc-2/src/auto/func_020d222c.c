#include "m2c.h"

M2C_UNK func_020d2084(M2C_UNK);                     /* extern */
M2C_UNK func_020d2104();                            /* extern */
s32 func_020d2264();                                /* extern */

void func_020d222c(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_020d2104();
        func_020d2084(9);
        return;
    }
    if (func_020d2264() != 0) {
        return;
    }
    func_020d2084(9);
}
