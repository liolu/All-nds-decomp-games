/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0203a6cc(M2C_UNK);                         /* extern */
s32 func_0204e94c(s32, M2C_UNK);                    /* extern */

void func_0204e684(void *arg0, M2C_UNK arg1) {
    s32 var_r0;

    var_r0 = func_0203a6cc(0x60);
    if (var_r0 != 0) {
        var_r0 = func_0204e94c(var_r0, arg1);
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r0;
}
