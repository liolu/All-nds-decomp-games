#include "m2c.h"

M2C_UNK func_020959ec();                            /* extern */

void *func_020959b8(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
        func_020959ec(arg0, arg1);
        M2C_FIELD(arg0, u8 *, 0xC)   = (u8) M2C_FIELD(arg1, u8 *, 0xC);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    }
    return arg0;
}
