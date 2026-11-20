/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201f014(s32, M2C_UNK);                /* extern */
s32 func_0201f8f8(s32, M2C_UNK);                    /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern s32 data_020d024c;

void func_0201f690(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r0;

    var_r0 = func_0207b068(0x68);
    if (var_r0 != 0) {
        var_r0 = func_0201f8f8(var_r0, arg1);
    }
    data_020d024c = var_r0;
    func_0201f014(var_r0, arg0);
}
