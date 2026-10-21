#include "m2c.h"

M2C_UNK func_0200abc4();                     /* extern */
M2C_UNK func_0202b238();           /* extern */
M2C_UNK func_0202b298();           /* extern */

void func_0202aff0(s32 arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3, u16 arg4, u8 arg5, s32 arg6, u8 arg7) {
    if (arg7 & 1) {
        func_0200abc4();
        func_0202b238(arg2, arg6, arg3);
    }
    if (!(arg7 & 2)) {
        return;
    }
    func_0200abc4(arg1);
    func_0202b298(arg2 + 0x10, arg6, arg4, arg5);
}
