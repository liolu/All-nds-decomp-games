#include "m2c.h"

s32 func_02006f0c(s32, s32);                        /* extern */
void *func_02029490();                              /* extern */
M2C_UNK func_0205d634(s32, s32);                    /* extern */
M2C_UNK func_0205e6a8(void *);                      /* extern */

void func_02049688(void) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = func_02029490();
    if (!(M2C_FIELD(temp_r0, s32 *, 0x38) & 1)) {
        return;
    }
    temp_r0_2                       = M2C_FIELD(temp_r0, s32 *, 0x30) + 1;
    M2C_FIELD(temp_r0, s32 *, 0x30) = temp_r0_2;
    func_0205d634(M2C_FIELD(temp_r0, s32 *, 0x20), 0x1F - func_02006f0c(temp_r0_2 * 0x1F, M2C_FIELD(temp_r0, s32 *, 0x34)));
    if ((s32) M2C_FIELD(temp_r0, s32 *, 0x30) < (s32) M2C_FIELD(temp_r0, s32 *, 0x34)) {
        return;
    }
    func_0205e6a8(temp_r0 + 0x20);
    M2C_FIELD(temp_r0, s32 *, 0x10) = 1;
}
