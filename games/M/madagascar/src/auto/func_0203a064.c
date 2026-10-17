#include "m2c.h"

M2C_UNK func_02000e50(void *, s32);                 /* extern */

void func_0203a064(void *arg0) {
    u8 var_r1;

    if (M2C_FIELD(arg0, u8 *, 0x1C) == 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    M2C_FIELD(arg0, u8 *, 0x1C) = var_r1;
    func_02000e50(arg0 + 4, 0 - M2C_FIELD(arg0, s32 *, 0x18));
}
