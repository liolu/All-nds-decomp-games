#include "m2c.h"

M2C_UNK func_02009310(s32, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_02009324(s32, M2C_UNK, M2C_UNK *, s32); /* extern */
s8 *func_02009a0c(M2C_UNK *, s32, s32);             /* extern */
M2C_UNK func_02088a58(M2C_UNK *, M2C_UNK);          /* extern */

void func_02016218(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5) {
    u8 sp0[256];
    s32 var_r4;

    var_r4 = arg3;
    if (var_r4 <= 0) {
        var_r4 = 0x100 - arg0;
    }
    func_02088a58(sp0, arg2);
    *func_02009a0c(sp0, var_r4, arg5) = 0;
    if (arg5 == 0) {
        func_02009310(arg0, arg1, sp0, arg4);
        return;
    }
    func_02009324(arg0, arg1, sp0, arg4);
}
