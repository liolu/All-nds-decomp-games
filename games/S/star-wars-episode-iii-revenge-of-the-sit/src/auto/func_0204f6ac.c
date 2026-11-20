/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0204d238();                                /* extern */
s32 func_0204d2c0(M2C_UNK, M2C_UNK, s32);           /* extern */
M2C_UNK func_0204d418(M2C_UNK, M2C_UNK);            /* extern */

s32 func_0204f6ac(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_0204d238();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if ((arg1 != 0) && (arg1 != 1)) {
        return 6;
    }
    func_0204d418(0x19, arg0);
    var_r0 = func_0204d2c0(0x19, 1, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
