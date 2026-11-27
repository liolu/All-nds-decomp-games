/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02074524(void *, s32, s32);            /* extern */

void func_02014970(void *arg0) {
    s32 var_r2;

    var_r2 = M2C_FIELD(arg0, s32 *, 0x10);
    if (var_r2 < -0x80) {
        var_r2 = -0x80;
    } else if (var_r2 > 0x7F) {
        var_r2 = 0x7F;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r2;
    func_02074524(arg0 + 0x88, 0xFFFF, M2C_FIELD(arg0, s32 *, 0x10));
}
