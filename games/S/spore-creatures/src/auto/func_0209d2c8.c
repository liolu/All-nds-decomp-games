#include "m2c.h"

s32 func_02090e10(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209d284(M2C_UNK);                     /* extern */
M2C_UNK func_0209d320(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020ad034(M2C_UNK *, s32);              /* extern */

void func_0209d2c8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    u8 sp0[16];

    func_020ad034(sp0, func_02090e10(arg1, 0, 1, 0));
    func_0209d284(arg0);
    func_0209d320(arg0, sp0, arg2, arg3);
}
