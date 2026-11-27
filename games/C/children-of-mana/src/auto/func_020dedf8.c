/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204f14c();                            /* extern */
M2C_UNK func_020def7c(void *, M2C_UNK, s32);        /* extern */
s32 func_020df0a8(void *);                          /* extern */

void func_020dedf8(void *arg0) {
    s32 var_r2;

    func_0204f14c();
    if (M2C_FIELD(arg0, s32 *, 0x9C) == 0) {
        return;
    }
    var_r2 = func_020df0a8(arg0) + 1;
    if (var_r2 < 0) {
        var_r2 = 0;
    } else if (var_r2 > 0xA) {
        var_r2 = 0xA;
    }
    func_020def7c(arg0, 0, var_r2);
}
