#include "m2c.h"

s32 *func_020b57c8(M2C_UNK, M2C_UNK, M2C_UNK);      /* extern */

void func_020b5cb4(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    s32 *temp_r0;

    temp_r0 = func_020b57c8(arg3, arg0, arg1);
    if (temp_r0 != NULL) {
        *temp_r0 = 0x6A;
    }
}
