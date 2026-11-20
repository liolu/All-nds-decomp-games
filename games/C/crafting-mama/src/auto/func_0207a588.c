#include "m2c.h"

void *func_02029490();                              /* extern */
M2C_UNK func_0205cfa8(s32, s32);                    /* extern */

void func_0207a588(void) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0                         = func_02029490();
    temp_r0_2                       = M2C_FIELD(temp_r0, s32 *, 0x20) + 1;
    M2C_FIELD(temp_r0, s32 *, 0x20) = temp_r0_2;
    if (temp_r0_2 < 0xB4) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 0x20) = 0;
    func_0205cfa8(M2C_FIELD(temp_r0, s32 *, 0x1C), M2C_FIELD(temp_r0, s32 *, 0x24));
}
