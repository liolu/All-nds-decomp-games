#include "m2c.h"

s32 func_02037430(void **arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r0_2;

    if (arg1 == 0xB) {
        var_r0_2 = M2C_FIELD(*arg0, s32 *, 0x4C);
        if (var_r0_2 != 0) {
            var_r0_2 -= 4;
        }
        return var_r0_2;
    }
    if (arg1 != 0xA) {
        var_r0 = M2C_FIELD((*arg0 + (arg1 * 8)), s32 *, 4);
        if (var_r0 != 0) {
            var_r0 -= 4;
        }
        return var_r0;
    }
    return 0;
}
