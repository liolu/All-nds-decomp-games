#include "m2c.h"

M2C_UNK func_01ffba64(s32, void *, M2C_UNK);        /* extern */
M2C_UNK func_0200a61c(s32, u8);                     /* extern */

void func_0200b75c(s32 arg0, void *arg1) {
    func_01ffba64(arg0 + 0x4C, arg1, 0x4C);
    func_0200a61c(arg0, M2C_FIELD(arg1, u8 *, 7));
}
