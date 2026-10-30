#include "m2c.h"

s32 func_02046c60();                                /* extern */
M2C_UNK func_02053114(M2C_UNK);                     /* extern */
M2C_UNK func_020537ec();                            /* extern */

void func_0201f608(void *arg0, M2C_UNK arg1, void *arg2) {
    s32 temp_r0;

    func_02053114(arg1);
    func_020537ec();
    temp_r0                                                                          = func_02046c60();
    M2C_FIELD(arg2, s32 *, 0x14)                                                     = temp_r0;
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x34FC) * 0x1C) + (s32) arg0), s32 *, 0x34B0) = temp_r0;
}
