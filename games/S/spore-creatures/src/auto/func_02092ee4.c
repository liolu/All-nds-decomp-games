#include "m2c.h"

s32 func_020bb8c4(M2C_UNK *);                       /* extern */
M2C_UNK func_020bb958(M2C_UNK *);                   /* extern */

void func_02092ee4(void) {
    u8 sp0[8];

    if (func_020bb8c4(sp0) == 0) {
        return;
    }
    func_020bb958(sp0);
}
