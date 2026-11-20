/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02012b38(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern s32 data_020d0220;

void func_02012aa0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 var_r0;

    var_r0 = func_0207b068(0x50);
    if (var_r0 != 0) {
        var_r0 = func_02012b38(var_r0, arg0, arg1, arg2, arg3);
    }
    data_020d0220 = var_r0;
}
