/* compiler: 1.2/sp2p3 -O2 */
#include "m2c.h"

s32 func_0208daf4();                                /* extern */

s32 func_0208c764(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
loop_1:
    if ((M2C_FIELD((arg0 + (M2C_FIELD((arg0 + (var_r4 * 4)), s32 *, 0x28C) * 4)), s32 *, 0x20) != 0) &&
        (func_0208daf4() == 0)) {
        return var_r4;
    }
    var_r4 += 1;
    if (var_r4 >= 3) {
        return -1;
    }
    goto loop_1;
}
