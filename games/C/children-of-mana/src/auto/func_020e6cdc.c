/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020e6580(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_020e66a4();                                /* extern */

void func_020e6cdc(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        return;
    }
    var_r0 = func_0200f270(0x770, 0);
    if (var_r0 != 0) {
        var_r0 = func_020e66a4();
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0;
    func_020e6580(M2C_FIELD(arg0, s32 *, 8), 0, 1);
}
