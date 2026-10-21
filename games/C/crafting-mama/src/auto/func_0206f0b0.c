#include "m2c.h"

s32 func_0200d65c(s32, s32);                        /* extern */

s32 func_0206f0b0(void *arg0) {
    s32 var_r0;
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0x1C);
    var_r0  = func_0200d65c(M2C_FIELD(temp_r1, s16 *, 0xA) - M2C_FIELD(arg0, s16 *, 0x22),
                            M2C_FIELD(temp_r1, s16 *, 8) - M2C_FIELD(arg0, s16 *, 0x20)) +
             0x4000;
    if (var_r0 > 0x10000) {
        var_r0 -= 0x10000;
    }
    return var_r0;
}
