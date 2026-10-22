/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205bacc(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_0205c5a0(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_02163310;

void func_0205c878(M2C_UNK arg0) {
    s32 temp_r4;
    s32 var_r6;

    var_r6 = func_0205bacc(&data_02163310, 0);
    if (var_r6 == 0) {
        return;
    }
    do {
        temp_r4 = func_0205bacc(&data_02163310, var_r6);
        func_0205c5a0(var_r6, arg0);
        var_r6 = temp_r4;
    } while (temp_r4 != 0);
}
