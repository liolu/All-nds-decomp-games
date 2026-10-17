/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202ddc8(s32, M2C_UNK);                    /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern s32 data_020d14c8;

void func_0202df8c(M2C_UNK arg0) {
    s32 var_r0;

    var_r0 = func_0207b068(0x208);
    if (var_r0 != 0) {
        var_r0 = func_0202ddc8(var_r0, arg0);
    }
    data_020d14c8 = var_r0;
}
