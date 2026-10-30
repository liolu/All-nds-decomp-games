#include "m2c.h"

M2C_UNK func_0204632c(s32, u8);                     /* extern */
M2C_UNK func_0204633c(s32, u8);                     /* extern */
M2C_UNK func_02053114(M2C_UNK);                     /* extern */
s32 func_020537ec();                                /* extern */

void func_0201f9c8(s32 arg0, M2C_UNK arg1, void *arg2) {
    func_02053114(arg1);
    func_0204632c(func_020537ec(), M2C_FIELD(arg2, u8 *, 0x2C));
    func_02053114(arg1);
    func_0204633c(func_020537ec(), M2C_FIELD(arg2, u8 *, 0x2D));
}
