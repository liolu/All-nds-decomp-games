#include "m2c.h"

s32 func_020118cc(u32 arg0) {
    s32 var_r1;

    var_r1 = 0;
    switch (arg0) {
        default:
            break;
        case 0:
            var_r1 = 0x2000;
            break;
        case 1:
        case 13:
            var_r1 = 4;
            break;
        case 2:
            var_r1 = 8;
            break;
        case 3:
        case 14:
            var_r1 = 0x40;
            break;
        case 4:
        case 15:
            var_r1 = 0x10;
            break;
        case 5:
        case 16:
            var_r1 = 0x80;
            break;
        case 6:
        case 17:
            var_r1 = 0x20;
            break;
        case 7:
        case 18:
        case 24:
        case 26:
            var_r1 = 1;
            break;
        case 8:
        case 20:
        case 25:
            var_r1 = 2;
            break;
        case 9:
        case 19:
            var_r1 = 0x400;
            break;
        case 10:
        case 21:
            var_r1 = 0x800;
            break;
        case 11:
        case 22:
            var_r1 = 0x200;
            break;
        case 12:
        case 23:
            var_r1 = 0x100;
            break;
    }
    return var_r1;
}
