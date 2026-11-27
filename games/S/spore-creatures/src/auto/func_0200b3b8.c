#include "m2c.h"

M2C_UNK func_0209274c(M2C_UNK, s32);                /* extern */
M2C_UNK func_0209275c(M2C_UNK, s32);                /* extern */
M2C_UNK func_0209276c(M2C_UNK, s32);                /* extern */
M2C_UNK func_02092798(M2C_UNK, s32);                /* extern */
M2C_UNK func_020927a8(M2C_UNK, s32);                /* extern */
M2C_UNK func_020927b8(M2C_UNK, s32);                /* extern */
s32 func_0209ad34(s32);                             /* extern */

void func_0200b3b8(s32 arg0, void *arg1, M2C_UNK arg2) {
    if (M2C_FIELD(arg1, u8 *, 8) != 0) {
        if (M2C_FIELD(arg1, u8 *, 9) != 0) {
            func_0209274c(arg2, func_0209ad34(M2C_FIELD(arg1, s32 *, 0xC)));
        } else {
            func_02092798(arg2, M2C_FIELD(arg1, s32 *, 0xC));
        }
    }
    if (M2C_FIELD(arg1, u8 *, 0x10) != 0) {
        if (M2C_FIELD(arg1, u8 *, 0x11) != 0) {
            func_0209275c(arg2, func_0209ad34(M2C_FIELD(arg1, s32 *, 0x14)));
        } else {
            func_020927a8(arg2, M2C_FIELD(arg1, s32 *, 0x14));
        }
    }
    if (M2C_FIELD(arg1, u8 *, 0x18) == 0) {
        return;
    }
    if (M2C_FIELD(arg1, u8 *, 0x19) != 0) {
        func_0209276c(arg2, func_0209ad34(M2C_FIELD(arg1, s32 *, 0x1C)));
        return;
    }
    func_020927b8(arg2, M2C_FIELD(arg1, s32 *, 0x1C));
}
