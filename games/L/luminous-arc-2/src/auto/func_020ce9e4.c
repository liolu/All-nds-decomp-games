#include "m2c.h"

s32 func_02002980();                                /* extern */
s32 func_020029b4();                                /* extern */
s32 func_020029d4();                                /* extern */
s32 func_02002a08();                                /* extern */
s32 func_02002a28();                                /* extern */
s32 func_02002aac();                                /* extern */
s32 func_02002b20();                                /* extern */
s32 func_02002ba4();                                /* extern */

s32 func_020ce9e4(u32 arg0) {
    s32 var_r1;

    var_r1 = 0;
    switch (arg0) {
        default:
            break;
        case 0:
            var_r1 = func_02002980();
            break;
        case 1:
            var_r1 = func_020029d4();
            break;
        case 2:
            var_r1 = func_02002a28();
            break;
        case 3:
            var_r1 = func_02002b20();
            break;
        case 4:
            var_r1 = func_020029b4();
            break;
        case 5:
            var_r1 = func_02002a08();
            break;
        case 6:
            var_r1 = func_02002aac();
            break;
        case 7:
            var_r1 = func_02002ba4();
            break;
    }
    return var_r1;
}
