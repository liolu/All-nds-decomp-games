#include "m2c.h"

s32 func_ov002_0210ed24(void *arg0) {
    s32 var_r0;

    var_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 16), s32 *, 0x1D0);
    if (var_r0 != 0) {
        var_r0 -= 4;
    }
    return var_r0;
}
