/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0208ff94(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_020900a0();                                /* extern */

void func_0203275c(s32 *arg0, M2C_UNK arg1) {
    s32 var_r0;

    if (*arg0 == 0) {
        var_r0 = func_0200f270(0x18, 0);
        if (var_r0 != 0) {
            var_r0 = func_020900a0();
        }
        *arg0 = var_r0;
    }
    func_0208ff94(*arg0, arg1, 0);
}
