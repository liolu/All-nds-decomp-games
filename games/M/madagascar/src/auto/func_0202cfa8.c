/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202d064(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_020562c8(M2C_UNK);                         /* extern */
extern M2C_UNK data_020d08c4;

s32 func_0202cfa8(M2C_UNK arg0) {
    s32 var_r4;

    var_r4 = 1;
    if ((func_0202d064(&data_020d08c4, arg0) == 0) && (func_020562c8(arg0) != 1)) {
        var_r4 = 0;
    }
    return var_r4;
}
