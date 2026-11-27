/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207463c(void *, s32);                 /* extern */

void func_02014fd8(void *arg0) {
    s32 var_r1;

    var_r1 = M2C_FIELD(arg0, s32 *, 0x38);
    if (var_r1 < 0) {
        var_r1 = 0;
    } else if (var_r1 > 0x7F) {
        var_r1 = 0x7F;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = var_r1;
    func_0207463c(arg0 + 0x88, M2C_FIELD(arg0, s32 *, 0x38));
}
