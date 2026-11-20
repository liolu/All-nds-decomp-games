#include "m2c.h"

M2C_UNK func_02003c20();                            /* extern */
M2C_UNK func_02003c68(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_02003cd4();                            /* extern */
M2C_UNK func_02003dd4();                            /* extern */
M2C_UNK func_02003dec(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_02003e50();                            /* extern */

void func_020cfae8(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    if (arg0 & 1) {
        func_02003c20();
        func_02003c68(arg1, arg2 << 9, arg3 << 5);
        func_02003cd4();
    }
    if (!(arg0 & 2)) {
        return;
    }
    func_02003dd4();
    func_02003dec(arg1, arg2 << 9, arg3 << 5);
    func_02003e50();
}
