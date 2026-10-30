#include "m2c.h"

M2C_UNK func_020738b0(s32, u8);                     /* extern */
M2C_UNK func_020738bc(s32, s32);                    /* extern */

void func_02020d2c(void *arg0, s32 arg1, void *arg2) {
    func_020738b0(M2C_FIELD(arg0, s32 *, 0x34E8), M2C_FIELD(arg2, u8 *, 0x342BC));
    func_020738bc(M2C_FIELD(arg0, s32 *, 0x34E8), M2C_FIELD(arg2, s32 *, 0x342C0));
}
