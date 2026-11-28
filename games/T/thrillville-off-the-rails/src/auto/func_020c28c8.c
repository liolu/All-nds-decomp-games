#include "m2c.h"

s32 func_020c28c8(s32 arg0, s32 arg1) {
    u16 *var_r0;

    switch (arg1) {                                 /* irregular */
        case 0:
            var_r0 = arg0 + 0x14;
            break;
        case 1:
            var_r0 = arg0 + 0x38;
            break;
        case 2:
            var_r0 = arg0 + 0x5C;
            break;
        default:
            var_r0 = NULL;
            break;
    }
    if (*var_r0 == 0) {
        return 1;
    }
    return 0;
}
