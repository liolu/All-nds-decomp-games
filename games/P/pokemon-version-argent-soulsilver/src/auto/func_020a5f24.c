#include "m2c.h"

M2C_UNK func_020d1f34(s32);                         /* extern */
M2C_UNK func_020d1fa0();                            /* extern */
void *func_020a5520();                              /* extern */

void func_020a5f24(void) {
    void *temp_r0;

    temp_r0 = func_020a5520();
    if (temp_r0 == NULL) {
        return;
    }
    func_020d1fa0();
    M2C_FIELD(temp_r0, s8 *, 8) = 0;
    if ((u32) (M2C_FIELD(temp_r0, s32 *, 4) - 1) > 1U) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 4) = 0;
    func_020d1f34(M2C_FIELD(temp_r0, s32 *, 0));
}
