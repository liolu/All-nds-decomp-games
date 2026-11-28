#include "m2c.h"

M2C_UNK func_0202120c(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_0207432c(s32);                         /* extern */

void func_0209764c(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r4 == 0) {
        return;
    }
    func_0202120c(0, temp_r4, M2C_FIELD(arg0, s32 *, 0x18));
    func_0207432c(temp_r4);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
