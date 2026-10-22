#include "m2c.h"

extern void *data_0215b6c0;

s32 func_0201bfc8(u32 arg0) {
    s32 var_r1;

    var_r1 = 0;
    switch (arg0) {
        case 0:
        case 2:
        case 4:
        case 6:
        case 7:
            break;
        default:
            break;
        case 1:
            var_r1 = M2C_FIELD(data_0215b6c0, s32 *, 4);
            break;
        case 3:
            var_r1 = M2C_FIELD(data_0215b6c0, s32 *, 8);
            break;
        case 5:
            var_r1 = M2C_FIELD(data_0215b6c0, s32 *, 0xC);
            break;
    }
    return var_r1;
}
