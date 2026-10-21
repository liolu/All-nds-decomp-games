#include "engine.h"
#include "m2c.h"

M2C_UNK func_02006f0c(M2C_UNK, M2C_UNK);

s32 func_0204d2dc(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r2;
    s32 var_r1;

    var_r1 = arg1;
    if (arg0 == 0) {
        return var_r1;
    }
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x3C);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_r0 <= temp_r2) {
        var_r1 = (s32) (s16) func_02006f0c(var_r1 * temp_r0, temp_r2);
    }
    return var_r1;
}
