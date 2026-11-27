#include "m2c.h"

M2C_UNK func_020b7040(M2C_UNK, s32, u16, s32);      /* extern */

void func_020926b4(void *arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    func_020b7040(3, M2C_FIELD(arg0, s32 *, 0x20) + ((arg1 + (arg2 << 5)) * 2), arg4, arg3 * 2);
}
