#include "m2c.h"

s32 func_020ab4ec(M2C_UNK);                         /* extern */
void *func_020b4b2c(s32, M2C_UNK);                  /* extern */

void func_020b8630(s32 arg0) {
    void *temp_r0;

    temp_r0 = func_020b4b2c(arg0 + 4, 0xE);
    if (M2C_FIELD(temp_r0, s8 *, 0) == 0) {
        M2C_FIELD(temp_r0, s8 *, 0) = (s8) (func_020ab4ec(2) + 1);
    }
    if (M2C_FIELD(temp_r0, s8 *, 1) != 0) {
        return;
    }
    M2C_FIELD(temp_r0, s8 *, 1) = (s8) (func_020ab4ec(2) + 1);
}
