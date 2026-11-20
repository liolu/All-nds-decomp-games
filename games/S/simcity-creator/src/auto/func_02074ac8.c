#include "m2c.h"

s32 func_02074ac8(s32 arg0, u32 arg1) {
    s32 var_r2;

    var_r2 = 0;
    switch (arg1) {
        default:
            break;
        case 3:
            var_r2 = arg0;
            break;
        case 4:
            var_r2 = arg0 + 0xC;
            break;
        case 5:
            var_r2 = arg0 + 0x18;
            break;
        case 6:
            var_r2 = arg0 + 0x24;
            break;
    }
    return var_r2;
}
