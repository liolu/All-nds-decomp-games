#include "m2c.h"

M2C_UNK func_0202312c(s32, M2C_UNK, s32 *, s32, s32); /* extern */

void func_02091a60(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 sp4;

    sp4 = M2C_FIELD(arg0, s32 *, 4) + (arg2 << 5);
    func_0202312c(M2C_FIELD(arg0, s32 *, 0x50), arg1, &sp4, (arg2 << 5) + 0x20, arg3 << 5);
}
