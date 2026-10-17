/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020270e4(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern s32 data_020d0270;

void func_02026e30(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r0;

    var_r0 = func_0207b068(0x54);
    if (var_r0 != 0) {
        var_r0 = func_020270e4(var_r0, arg0, arg1);
    }
    data_020d0270 = var_r0;
}
