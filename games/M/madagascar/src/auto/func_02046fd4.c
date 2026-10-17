/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02039f14(s32, M2C_UNK);                /* extern */
s32 func_0203a020();                                /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */

void func_02046fd4(void *arg0, M2C_UNK arg1) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0x1D8) == 0) {
        var_r0 = func_0207b068(0x14);
        if (var_r0 != 0) {
            var_r0 = func_0203a020();
        }
        M2C_FIELD(arg0, s32 *, 0x1D8) = var_r0;
    }
    func_02039f14(M2C_FIELD(arg0, s32 *, 0x1D8), arg1);
}
