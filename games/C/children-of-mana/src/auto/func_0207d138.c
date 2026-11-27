/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a54d0(s32, s32);                    /* extern */

void func_0207d138(void *arg0) {
    s32 temp_r2;
    s32 var_r1;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x44);
    if (temp_r2 == 0) {
        return;
    }
    var_r1 = M2C_FIELD(arg0, s32 *, 0x25C) - 1;
    if (var_r1 < 0) {
        var_r1 = 0;
    }
    func_020a54d0(temp_r2, var_r1);
}
