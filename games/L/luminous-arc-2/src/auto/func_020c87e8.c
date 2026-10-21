#include "m2c.h"

s32 func_02078f08();                                /* extern */
s32 func_020c8664();                                /* extern */
M2C_UNK func_020cd4d8();                            /* extern */
M2C_UNK func_020cd508(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_020c87e8(void) {
    if (func_020c8664() == 0) {
        return;
    }
    if ((func_02078f08() & 1) != 1) {
        return;
    }
    func_020cd4d8();
    func_020cd508(0, 5, 1);
}
