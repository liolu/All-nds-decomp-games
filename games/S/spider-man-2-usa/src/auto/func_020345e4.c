/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201a400(M2C_UNK, u32);                /* extern */
M2C_UNK func_0203444c();                            /* extern */
M2C_UNK func_02034510(M2C_UNK, u32);                /* extern */

void func_020345e4(M2C_UNK arg0, s32 *arg1) {
    s32 temp_r2;
    u32 temp_r1;
    u32 var_r1;

    temp_r2 = *arg1;
    var_r1  = (u32) (temp_r2 << 0x15) >> 0x1F;
    if ((var_r1 != 0) || (var_r1 = (u32) (temp_r2 << 0x14) >> 0x1F, (var_r1 != 0))) {
        func_0201a400(arg0, var_r1);
        return;
    }
    temp_r1 = (u32) (temp_r2 << 0x18) >> 0x1F;
    if (temp_r1 != 0) {
        func_02034510(arg0, temp_r1);
        return;
    }
    if (((u32) (temp_r2 << 0x19) >> 0x1F) == 0) {
        return;
    }
    func_0203444c(arg0);
}
