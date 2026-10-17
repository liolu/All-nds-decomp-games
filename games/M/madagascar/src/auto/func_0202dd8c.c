/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202dad0(s32, M2C_UNK);                    /* extern */
s32 func_0207b068(s32);                             /* extern */
extern s32 data_020d14c4;

void func_0202dd8c(M2C_UNK arg0) {
    s32 var_r0;

    var_r0 = func_0207b068(0xA48);
    if (var_r0 != 0) {
        var_r0 = func_0202dad0(var_r0, arg0);
    }
    data_020d14c4 = var_r0;
}
