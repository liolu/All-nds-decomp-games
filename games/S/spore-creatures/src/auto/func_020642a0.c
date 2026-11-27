#include "m2c.h"

M2C_UNK func_01ffba64(s32, s32, M2C_UNK);           /* extern */

s32 func_020642a0(s32 arg0, s32 arg1) {
    func_01ffba64(arg0 + 4, arg1, 0xC);
    func_01ffba64(arg0 + 0x10, arg1 + 0xC, 0xC);
    func_01ffba64(arg0, arg1 + 0x18, 2);
    return 0x1A;
}
