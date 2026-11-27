/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02065304(void *arg0) {
    s32 var_r1;

    var_r1 = M2C_FIELD(arg0, s32 *, 0x14);
    if (var_r1 == 0) {
        var_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 8);
    }
    if ((var_r1 == 2) || (var_r1 == 4)) {
        return 1;
    }
    return 0;
}
