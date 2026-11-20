/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020125f4(void *, M2C_UNK);             /* extern */
M2C_UNK func_02013d10();                            /* extern */
s32 func_02035980(s32, M2C_UNK);                    /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */

void func_02012d0c(void *arg0) {
    s32 var_r0;

    func_02013d10();
    func_020125f4(arg0, 3);
    var_r0 = func_0203a6cc(0x5C);
    if (var_r0 != 0) {
        var_r0 = func_02035980(var_r0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r0;
}
