/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02074554(void *, s32, s32);            /* extern */

void func_02014f54(void *arg0) {
    s32 var_r2;

    var_r2 = M2C_FIELD(arg0, s32 *, 0x14);
    if (var_r2 < -0x8000) {
        var_r2 = -0x8000;
    } else if (var_r2 > 0x7FFF) {
        var_r2 = 0x7FFF;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_r2;
    func_02074554(arg0 + 0x88, 0xFFFF, M2C_FIELD(arg0, s32 *, 0x14));
}
