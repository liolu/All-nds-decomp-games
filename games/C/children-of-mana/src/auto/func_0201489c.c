/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02014594();                            /* extern */
M2C_UNK func_020744f4(void *, s32);                 /* extern */

void func_0201489c(void *arg0) {
    s32 var_r0;

    func_02014594();
    if (M2C_FIELD(arg0, u8 *, 0x8C) == 0) {
        return;
    }
    var_r0 = M2C_FIELD(arg0, s32 *, 0x90);
    if (var_r0 < 0) {
        var_r0 = 0;
    } else if (var_r0 > 0x10000) {
        var_r0 = 0x10000;
    }
    M2C_FIELD(arg0, s32 *, 0x90) = var_r0;
    func_020744f4(arg0 + 0x88, M2C_FIELD(arg0, s32 *, 0x90));
}
