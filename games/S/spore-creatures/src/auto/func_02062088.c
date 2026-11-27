#include "m2c.h"

M2C_UNK func_020620bc();                            /* extern */
M2C_UNK func_0208a70c();                            /* extern */

void func_02062088(void *arg0) {
    s32 var_r1;

    var_r1 = M2C_FIELD(arg0, s32 *, 0x24);
    if (var_r1 != 0) {
        var_r1 -= 0x20;
    }
    if (var_r1 == 0) {
        func_0208a70c(arg0);
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x40) == 0) {
        return;
    }
    func_020620bc(arg0);
}
