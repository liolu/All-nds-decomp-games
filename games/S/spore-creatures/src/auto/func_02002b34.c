#include "m2c.h"

M2C_UNK func_0200307c(s32);                         /* extern */

void func_02002b34(s32 arg0, s32 arg1) {
    func_0200307c((arg1 * 0x1C) + arg0);
    M2C_FIELD(arg0, s8 *, 0x370) = 1;
}
