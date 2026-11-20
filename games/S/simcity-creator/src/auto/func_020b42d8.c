#include "m2c.h"

M2C_UNK func_020b430c(void *, M2C_UNK, s32, M2C_UNK, s32, s32, s32); /* extern */

void func_020b42d8(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s16 arg4, s16 arg5) {
    M2C_FIELD(arg0, s8 *, 0x84) = 1;
    func_020b430c(arg0, arg1, M2C_FIELD(arg0, s32 *, 0x28), arg2, arg3, (s32) arg4, (s32) arg5);
}
