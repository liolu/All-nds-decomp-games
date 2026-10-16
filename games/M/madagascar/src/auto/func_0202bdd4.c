/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0207b068(s32);                             /* extern */
s32 func_0202be58(s32, M2C_UNK, M2C_UNK);           /* extern */
extern s32 data_020d02a0;

void func_0202bdd4(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r0;

    var_r0 = func_0207b068(0x618);
    if (var_r0 != 0) {
        var_r0 = func_0202be58(var_r0, arg0, arg1);
    }
    data_020d02a0 = var_r0;
}
