#include "m2c.h"

s32 func_020a3398(void *arg0) {
    s32 var_r2;
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0xC);
    var_r2  = 0;
    if (temp_r0 != NULL) {
        var_r2                         = M2C_FIELD(*temp_r0, s32(**)(), 0x14)(temp_r0);
        M2C_FIELD(arg0, void ***, 0xC) = NULL;
    }
    return var_r2;
}
