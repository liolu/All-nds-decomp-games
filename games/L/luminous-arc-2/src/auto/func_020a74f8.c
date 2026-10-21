#include "m2c.h"

s32 func_020aaa4c(M2C_UNK);                         /* extern */
M2C_UNK func_020a9c00(s32, s32, u16, M2C_UNK, s32); /* extern */

void func_020a74f8(s32 arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    func_020a9c00(arg0 + 0x4C, func_020aaa4c(arg1), (u16) ((u8) (arg2 >> 8) | ((arg2 << 8) & 0xFF00)), arg3, arg4);
}
