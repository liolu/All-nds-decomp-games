#include "m2c.h"

s32 func_02001488(s32 arg0, u32 arg1, s32 arg2) {
    s32 var_r2;

    var_r2 = arg2;
    switch (arg1) {
        default:
            break;
        case 5:
            var_r2 += 0xA;
        /* fallthrough */
        case 4:
            var_r2 += 0xA;
        /* fallthrough */
        case 3:
            var_r2 += 0xA;
        /* fallthrough */
        case 2:
            var_r2 += 0xA;
        /* fallthrough */
        case 1:
            var_r2 += 0xA;
            break;
    }
    return var_r2;
}
