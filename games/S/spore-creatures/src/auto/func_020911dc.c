#include "m2c.h"

M2C_UNK func_020934bc(s32);                         /* extern */

void func_020911dc(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {
        return;
    }
    if (arg1 != 0) {
        func_020934bc(M2C_FIELD(arg0, s32 *, 0xC));
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, u8 *, 0x10) = 0U;
}
