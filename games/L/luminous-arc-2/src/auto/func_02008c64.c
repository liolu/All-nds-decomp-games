#include "m2c.h"

M2C_UNK func_02005ac8(s32, M2C_UNK);                /* extern */
M2C_UNK func_02007f78();                            /* extern */
M2C_UNK func_02007f8c();                            /* extern */

void func_02008c64(s32 arg0, s32 arg1, s32 arg2) {
    func_02007f78();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_02005ac8(arg0 + 0x3C + (arg1 * 4), 4);
    func_02007f8c();
}
