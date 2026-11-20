/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202982c(void *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0202987c(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_0202be38();                              /* extern */

void func_02028cc8(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 8) = 4;
    if (M2C_FIELD(func_0202be38(), s32 *, 0x598) != 1) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = arg3;
    if (arg4 == 0) {
        func_0202987c(func_0202be38(), arg1, arg2);
        return;
    }
    func_0202982c(func_0202be38(), arg1, arg2, arg4);
}
