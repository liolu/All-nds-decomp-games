#include "engine.h"
#include "m2c.h"

s32 func_02028ee4(void *, s32);

extern M2C_UNK data_020d9118;

s32 func_0203047c(s32 arg0) {
    s32 var_r1;
    s32 var_r5;

    var_r5 = 0;
    var_r1 = func_02028ee4(&data_020d9118, 0);
    if (var_r1 != 0) {
        do {
            if ((M2C_FIELD(var_r1, u16 *, 0x34) == 1) && (M2C_FIELD(var_r1, u16 *, 0x38) == arg0)) {
                var_r5 += 1;
            }
            var_r1 = func_02028ee4(&data_020d9118, var_r1);
        } while (var_r1 != 0);
    }
    return var_r5;
}
