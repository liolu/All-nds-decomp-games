#include "m2c.h"

M2C_UNK func_020022cc(s32, M2C_UNK);                /* extern */
M2C_UNK func_0200245c(s32);                         /* extern */

void func_02036690(s32 arg0, s32 arg1, M2C_UNK arg2) {
    func_0200245c(arg0 + 0xC8);
    func_020022cc(arg0 + 0xC8, arg2);
}
