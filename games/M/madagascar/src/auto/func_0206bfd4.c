/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0206b124(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0206b254(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0206b370(M2C_UNK, M2C_UNK);            /* extern */

s32 func_0206bfd4(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_0206b124(1, 1);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0206b370(5, arg0);
    var_r0 = func_0206b254(5, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
