/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0204e0fc(s32);                             /* extern */
M2C_UNK func_02054ac8(M2C_UNK, s32);                /* extern */
extern void *data_020b3cf8;

s32 func_02054e00(void) {
    s32 var_r4;

    var_r4 = func_0204e0fc(M2C_FIELD(data_020b3cf8, s32 *, 0x508));
    func_02054ac8(1, var_r4);
    if (var_r4 == 2) {
        var_r4 = 0;
    }
    return var_r4;
}
