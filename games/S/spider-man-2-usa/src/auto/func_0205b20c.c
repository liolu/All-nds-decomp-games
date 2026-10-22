#include "m2c.h"

extern u32 data_021617a4;

s32 func_0205b20c(u32 arg0) {
    s32 var_r0;

    if (arg0 > (u32) data_021617a4) {
        if ((u32) (arg0 - data_021617a4) >= 0x80000000U) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    if ((u32) (data_021617a4 - arg0) < 0x80000000U) {
        return 1;
    }
    return 0;
}
