#include "m2c.h"

s32 func_020aa5b8(u32 arg0) {
    s32 var_r1;

    var_r1 = 0;
    switch (arg0) {
        default:
            break;
        case 0:
        case 1:
            var_r1 = 1;
            break;
        case 2:
        case 3:
            var_r1 = 2;
            break;
        case 4:
        case 5:
            var_r1 = 3;
            break;
        case 6:
        case 7:
            var_r1 = 4;
            break;
        case 8:
        case 9:
            var_r1 = 5;
            break;
        case 10:
        case 13:
            var_r1 = 7;
            break;
        case 14:
        case 15:
            var_r1 = 8;
            break;
        case 16:
        case 17:
            var_r1 = 9;
            break;
        case 18:
            var_r1 = 0xA;
            break;
    }
    return var_r1;
}
