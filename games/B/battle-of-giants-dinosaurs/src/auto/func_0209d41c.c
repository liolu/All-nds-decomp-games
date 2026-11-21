#include "m2c.h"

M2C_UNK func_0209d0f8();                            /* extern */
M2C_UNK func_0209d150();                            /* extern */

void func_0209d41c(s32 arg0, s32 arg1, u32 arg2) {
    if ((u32) (arg2 >> 3) < 0x20U) {
        func_0209d0f8(arg0, arg1, arg2);
        return;
    }
    func_0209d150(arg0, arg1, arg2);
}
