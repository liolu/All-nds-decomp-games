#include "m2c.h"

void func_0201aac0(void *arg0, s32 *arg1) {
    s32 var_r0;

    if (M2C_FIELD(arg0, u8 *, 0x33) != 0) {
        var_r0 = M2C_FIELD(arg0, s32 *, 0x28);
    } else {
        var_r0 = M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x30) * 4)), s32 *, 0x24);
    }
    *arg1 = var_r0;
}
