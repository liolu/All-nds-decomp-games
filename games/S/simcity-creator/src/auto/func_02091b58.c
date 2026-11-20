#include "m2c.h"

M2C_UNK func_0202312c(s32, M2C_UNK, s32 *, M2C_UNK, s32); /* extern */
s32 func_02091a98(void *, M2C_UNK);                 /* extern */
s32 func_02091ad4(void *, M2C_UNK);                 /* extern */

void func_02091b58(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 sp4;

    sp4 = func_02091ad4(arg0, arg2);
    func_0202312c(M2C_FIELD(arg0, s32 *, 0x50), arg1, &sp4, 0x24, func_02091a98(arg0, arg2));
}
