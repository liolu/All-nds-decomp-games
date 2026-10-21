#include "m2c.h"

s32 func_0204f568(s16);                             /* extern */

void func_02048c64(void *arg0) {
    u8 var_r1;

    if (func_0204f568(M2C_FIELD(arg0, volatile s16 *, 0x1AF0)) > 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    M2C_FIELD(arg0, volatile u8 *, 0x1AFB) = var_r1;
    if (M2C_FIELD(arg0, volatile u8 *, 0x1AFB) != 0) {
        M2C_FIELD(arg0, volatile s32 *, 0x1AEC) = 0x18;
        return;
    }
    M2C_FIELD(arg0, volatile s32 *, 0x1AEC) = 0x1A;
}
