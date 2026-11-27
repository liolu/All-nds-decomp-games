#include "m2c.h"

M2C_UNK func_02002fe0(s32, M2C_UNK);                /* extern */

void func_02002b10(s32 arg0, s32 arg1, M2C_UNK arg2) {
    func_02002fe0((arg1 * 0x1C) + arg0, arg2);
    M2C_FIELD(arg0, s8 *, 0x370) = 1;
}
