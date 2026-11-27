/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020aac90();                                /* extern */

s32 func_0204fb90(u32 arg0) {
    s32 var_r1;

    var_r1 = 0;
    switch (arg0) {
        default:
            break;
        case 1:
            var_r1 = func_020aac90() + 0x20E;
            break;
        case 2:
            var_r1 = func_020aac90() + 0x215;
            break;
        case 3:
            var_r1 = func_020aac90() + 0x272;
            break;
        case 4:
            var_r1 = func_020aac90() + 0x2C8;
            break;
        case 5:
            var_r1 = func_020aac90() + 0x382;
            break;
    }
    return var_r1;
}
