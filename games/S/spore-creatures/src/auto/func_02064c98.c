#include "m2c.h"

M2C_UNK func_02064e04(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02064e6c(void *);                      /* extern */
s32 func_020886e8(void *);                          /* extern */

void func_02064c98(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (M2C_FIELD(arg0, u8 *, 0x15) != 0) {
        return;
    }
    if (func_020886e8(arg0 + 0x18) == 0) {
        func_02064e6c(arg0);
    }
    func_02064e04(arg0, arg1, arg2, arg3);
    if ((func_020886e8(arg0 + 0x18) == 0) && (M2C_FIELD(arg0, u8 *, 0x14) == 0)) {
        M2C_FIELD(arg0, u8 *, 0x15) = 1U;
    }
}
