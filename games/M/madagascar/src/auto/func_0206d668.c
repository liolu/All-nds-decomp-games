/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0206b1cc();                                /* extern */
s32 func_0206b254(M2C_UNK, M2C_UNK, s32);           /* extern */
M2C_UNK func_0206b370(M2C_UNK, M2C_UNK);            /* extern */

s32 func_0206d668(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_0206b1cc();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if ((arg1 != 0) && (arg1 != 1)) {
        return 6;
    }
    func_0206b370(0x19, arg0);
    var_r0 = func_0206b254(0x19, 1, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
