#include "m2c.h"

M2C_UNK func_020959ec();                            /* extern */

void *func_020a4fa0(void *arg0, s32 *arg1, u8 *arg2) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) *arg1;
    func_020959ec(arg0, arg1);
    M2C_FIELD(arg0, u8 *, 0xC) = (u8) *arg2;
    return arg0;
}
