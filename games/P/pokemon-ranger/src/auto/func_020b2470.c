/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020b2470(void *arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r2;

    temp_r3 = arg1 - 4;
    var_r2  = 1;
    if ((*M2C_FIELD(arg0, s32 **, 0) != temp_r3) && (M2C_FIELD(arg0, s32 *, 4) != temp_r3)) {
        var_r2 = 0;
    }
    return var_r2;
}
