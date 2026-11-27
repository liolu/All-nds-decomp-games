#include "m2c.h"

M2C_UNK func_0204bc44(void *, s32, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_0204e600();                                /* extern */

void func_0204c5b0(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x230);
    if (temp_r4 != func_0204e600()) {
        return;
    }
    func_0204bc44(arg0, 0x7D4D0DDE, 0, 1, 0);
}
