/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204f8a4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0204f9b8(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0207d1f8(s32, M2C_UNK);                    /* extern */
M2C_UNK func_ov013_02131810(s32, M2C_UNK);          /* extern */

s32 func_0207d2e0(s32 arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = 0;
    if (func_0204f9b8(4, arg1, 0) != 0) {
        func_0204f8a4(4, arg1, 1, 0);
        temp_r0 = func_0207d1f8(arg0, arg1);
        if (temp_r0 != -1) {
            func_ov013_02131810(M2C_FIELD((arg0 + (temp_r0 * 4)), s32 *, 0x5C), 4);
        }
        var_r4 = 1;
    }
    return var_r4;
}
