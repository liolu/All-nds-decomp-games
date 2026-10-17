/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020290e4(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern s32 data_020d0280;

void func_02029004(M2C_UNK arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = func_0207b068(0x40);
    if (var_r0 != 0) {
        var_r0 = func_020290e4(var_r0, 1, arg0, 0, arg1);
    }
    data_020d0280 = var_r0;
}
