#include "m2c.h"

M2C_UNK func_020639f0(s32, M2C_UNK);                /* extern */
M2C_UNK func_02065aa8();                            /* extern */
M2C_UNK func_02065abc();                            /* extern */

void func_02066774(s32 arg0, s32 arg1, s32 arg2) {
    func_02065aa8();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_020639f0(arg0 + 0x3C + (arg1 * 4), 4);
    func_02065abc();
}
