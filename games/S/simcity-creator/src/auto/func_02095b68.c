#include "m2c.h"

s32 func_02095b68(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_r3;

    var_r3                        = 0;
    temp_r2                       = M2C_FIELD(arg0, s32 *, 0x610) + arg1;
    M2C_FIELD(arg0, s32 *, 0x610) = temp_r2;
    if (temp_r2 >= 0x80) {
        var_r3                        = temp_r2 - 0x7F;
        M2C_FIELD(arg0, s32 *, 0x610) = 0x7F;
    }
    return var_r3;
}
