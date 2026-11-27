/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u8 data_021154e4;

s32 func_020299ac(s32 arg0) {
    s32 var_r2;

    var_r2 = 1;
    if (!(data_021154e4 & (1 << arg0))) {
        var_r2 = 0;
    }
    return var_r2;
}
