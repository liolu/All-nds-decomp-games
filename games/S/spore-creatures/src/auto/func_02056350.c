/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s8 func_02056350(s32 arg0) {
    s32 var_r3;
    s8 temp_r1;
    s8 var_r2;

    var_r2 = 0;
    var_r3 = 0;
    do {
        temp_r1 = *(s8 *) (arg0 + var_r3);
        var_r3 += 1;
        var_r2 += temp_r1;
    } while (var_r3 < 5);
    return var_r2;
}