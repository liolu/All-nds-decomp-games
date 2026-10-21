#include "m2c.h"

s32 func_02041f60(void *arg0) {
    s32 temp_r2;
    s32 var_r0;

    if (arg0 == NULL) {
        return 0;
    }
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x2C);
    if ((temp_r2 == 0) && (M2C_FIELD(arg0, s32 *, 0x30) == 0)) {
        return 0;
    }
    var_r0 = M2C_FIELD(arg0, s32 *, 0x30);
    if (var_r0 == 0) {
        var_r0 = temp_r2;
    }
    return var_r0;
}
