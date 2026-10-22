/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201a400(M2C_UNK, u32, u32);           /* extern */

void func_0201f5a8(M2C_UNK arg0, u32 *arg1) {
    u32 temp_r2;
    u32 var_r1;

    var_r1  = *arg1;
    temp_r2 = (u32) (var_r1 << 0x15) >> 0x1F;
    if (temp_r2 == 0) {
        var_r1 = (u32) (var_r1 << 0x14) >> 0x1F;
        if (var_r1 == 0) {
            return;
        }
    }
    func_0201a400(arg0, var_r1, temp_r2);
}
