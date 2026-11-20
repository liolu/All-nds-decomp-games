/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0204d190(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0204d2c0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0204d418(M2C_UNK, M2C_UNK);            /* extern */

s32 func_0204de90(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_0204d190(1, 7);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0204d418(9, arg0);
    var_r0 = func_0204d2c0(9, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
