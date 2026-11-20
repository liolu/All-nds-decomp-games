/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02055fcc(void *, M2C_UNK, s32);        /* extern */

void func_0204d7b0(s32 arg0, u16 *arg1, M2C_UNK arg2) {
    s32 var_r3;

    var_r3 = *arg1 * 2;
    if (var_r3 & 3) {
        var_r3 = (var_r3 + 4) & ~3;
    }
    func_02055fcc(((s8 *) arg1 + 4), arg2, var_r3);
}
