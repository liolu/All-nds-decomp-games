#include "m2c.h"

M2C_UNK func_02005198(s32);                         /* extern */
M2C_UNK func_02005204();                            /* extern */
void *func_02097688();                              /* extern */

void func_0209808c(void) {
    void *temp_r0;

    temp_r0 = func_02097688();
    if (temp_r0 == NULL) {
        return;
    }
    func_02005204();
    M2C_FIELD(temp_r0, s8 *, 8) = 0;
    if ((u32) (M2C_FIELD(temp_r0, s32 *, 4) - 1) > 1U) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 4) = 0;
    func_02005198(M2C_FIELD(temp_r0, s32 *, 0));
}
