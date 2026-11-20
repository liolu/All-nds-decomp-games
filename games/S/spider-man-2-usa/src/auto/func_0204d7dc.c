/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02055f74();                            /* extern */
M2C_UNK func_02055fcc(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_02056040(s32);                         /* extern */

void func_0204d7dc(s32 arg0, u16 *arg1, M2C_UNK arg2) {
    s32 var_r0;
    s32 var_r4;

    var_r4 = *arg1 * 2;
    var_r0 = var_r4 & 3;
    if (var_r0 != 0) {
        var_r0 = var_r4 + 4;
        var_r4 = var_r0 & ~3;
    }
    func_02056040(var_r0);
    func_02055fcc(((s8 *) arg1 + 4), arg2, var_r4);
    func_02055f74();
}
