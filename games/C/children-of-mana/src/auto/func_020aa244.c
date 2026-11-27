/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02127214;

s32 func_020aa244(s32 arg0) {
    s32 var_r2;

    var_r2 = 1;
    if (!(M2C_FIELD(&data_02127214, s32 *, 0x820) & (1 << arg0))) {
        var_r2 = 0;
    }
    return var_r2;
}
