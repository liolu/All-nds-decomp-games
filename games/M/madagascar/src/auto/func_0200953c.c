#include "m2c.h"

s32 func_0200953c(void *arg0) {
    s32 temp_r1;
    s32 var_r0;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x1BC);
    var_r0  = M2C_FIELD(temp_r2, s32 *, 0x10);
    if (M2C_FIELD(arg0, u8 *, 0x1F4) == 0) {
        return var_r0;
    }
    temp_r1 = M2C_FIELD(temp_r2, s32 *, 0x28);
    if (var_r0 <= temp_r1) {
        var_r0 = temp_r1;
    }
    return var_r0;
}
