/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0204d238();                                /* extern */
s32 func_0204d2c0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_0204d418(M2C_UNK, M2C_UNK);            /* extern */

s32 func_0204f640(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, u16 arg4) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_0204d238();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0204d418(0x1D, arg0);
    var_r0 = func_0204d2c0(0x1D, 4, arg1, arg2, arg3, (s32) arg4);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
