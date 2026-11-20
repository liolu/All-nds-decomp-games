#include "m2c.h"

void *func_02078f24();                              /* extern */
s32 func_020c8664();                                /* extern */
M2C_UNK func_020cf2a0(M2C_UNK, M2C_UNK, s16, s16, s32, s32, s32, s32, s32, s32); /* extern */

void func_020c8b40(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s16 arg4, s16 arg5, u8 arg6) {
    if (func_020c8664() == 0) {
        return;
    }
    func_020cf2a0(arg3, 0, arg4, arg5, (s32) arg6, 0xFF, arg2, (M2C_FIELD(func_02078f24(), u8 *, 0x77F) & 3) + 0x1D0000, arg1,
                  arg0);
}
